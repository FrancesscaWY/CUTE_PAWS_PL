#include <iostream>
#include <thread>
#include <vector>
using namespace std;

#include<wchar.h> //snwprintf()
#include <stdio.h>
#include <windows.h>

// 定义 ms 后缀操作符
std::chrono::milliseconds operator""ms(unsigned long long milliseconds)
{
    return std::chrono::milliseconds(milliseconds); //防止while循环开头的sleep_for()报错
}

wstring tetromino[7]; //长度为7的字符串数组, 保存7种方块
int nFieldWidth = 12;
int nFieldHeight = 18;
unsigned char *pField = nullptr; //动态分配内存

int nScreenWidth = 80; //Console Screen Size X (columns)
int nScreenHeight = 30; //Console Screen Size Y (rows)

int Rotate(int px, int py, int r) // px横坐标, py纵坐标, r旋转次数
{
    int pi = 0;
    switch (r % 4)
    {
        case 0: // 0 degrees			// 0  1  2  3
            pi = py * 4 + px;			// 4  5  6  7
            break;						// 8  9 10 11
            //12 13 14 15

        case 1: // 90 degrees			//12  8  4  0
            pi = 12 + py - (px * 4);	//13  9  5  1
            break;						//14 10  6  2
            //15 11  7  3

        case 2: // 180 degrees			//15 14 13 12
            pi = 15 - (py * 4) - px;	//11 10  9  8
            break;						// 7  6  5  4
            // 3  2  1  0

        case 3: // 270 degrees			// 3  7 11 15
            pi = 3 - py + (px * 4);		// 2  6 10 14
            break;						// 1  5  9 13
    }								// 0  4  8 12

    return pi; // 返回索引
}

bool DoesPieceFit(int nTetromino, int nRotation, int nPosX, int nPosY)
{
    for (int px = 0; px < 4; px++)
        for (int py = 0; py < 4; py++)
        {
            // Get index into piece
            int pi = Rotate(px, py, nRotation);

            //Get index into field
            int fi = (nPosY + py) * nFieldWidth + (nPosX + px);

            // Check that test is in bounds. Note out of bounds does
            // not necessarily mean a fail, as the long vertical piece
            // can have cells that lie outside the boundary, so we'll
            // just ignore them
            if (nPosX + px >= 0 && nPosX + px < nFieldWidth)
                if (nPosY + py >= 0 && nPosY + py < nFieldHeight)
                    if (tetromino[nTetromino][pi] == L'X' && pField[fi] != 0)
                        return false; // fail on first hit
        }

    return true;
}

int main()
{
    //创建7种方块
    tetromino[0].append(L"..X."); //结尾追加字符
    tetromino[0].append(L"..X.");
    tetromino[0].append(L"..X.");
    tetromino[0].append(L"..X.");

    tetromino[1].append(L"..X."); //结尾追加字符
    tetromino[1].append(L".XX.");
    tetromino[1].append(L".X..");
    tetromino[1].append(L"....");

    tetromino[2].append(L".X.."); //结尾追加字符
    tetromino[2].append(L".XX.");
    tetromino[2].append(L"..X.");
    tetromino[2].append(L"....");

    tetromino[3].append(L"...."); //结尾追加字符
    tetromino[3].append(L".XX.");
    tetromino[3].append(L".XX.");
    tetromino[3].append(L"....");

    tetromino[4].append(L"..X."); //结尾追加字符
    tetromino[4].append(L".XX.");
    tetromino[4].append(L"..X.");
    tetromino[4].append(L"....");

    tetromino[5].append(L"...."); //结尾追加字符
    tetromino[5].append(L".XX.");
    tetromino[5].append(L"..X.");
    tetromino[5].append(L"..X.");

    tetromino[6].append(L"..X."); //结尾追加字符
    tetromino[6].append(L"..X.");
    tetromino[6].append(L".XX.");
    tetromino[6].append(L"....");

    pField = new unsigned char[nFieldWidth*nFieldHeight]; //Create play
    for(int x = 0; x < nFieldWidth; ++x) //Board Boundary
        for(int y = 0; y < nFieldHeight; ++y)
            pField[y*nFieldWidth + x] = (x == 0 || x == nFieldWidth - 1 || y == nFieldHeight - 1) ? 9 : 0;

    wchar_t *screen = new wchar_t[nScreenWidth*nScreenHeight];
    for(int i = 0; i < nScreenWidth*nScreenHeight; ++i) screen[i] = L' ';
    HANDLE hConsole = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
    SetConsoleActiveScreenBuffer(hConsole);
    DWORD dwBytesWritten = 0;

    // Game Logic Stuff
    bool bGameOver = false;

    int nCurrentPiece = 0; //方块编号
    int nCurrentRotation = 0; //旋转状态
    int nCurrentX = nFieldWidth / 2; //方块x坐标
    int nCurrentY = 0; //方块y坐标

    bool bKey[4];
    bool bRotatedHold = false;

    int nSpeed = 20;
    int nSpeedCounter = 0;
    bool bForceDown  = false;

    int nPieceCount = 0; // 难度设置
    int nScore = 0; //分数

    vector<int> vLines;

    while(!bGameOver)
    {
        // GAME TIMING ===================== 计时
        this_thread::sleep_for(50ms);
        nSpeedCounter++;
        bForceDown = (nSpeedCounter == nSpeed);

        // INPUT ===========================
        for (int k = 0; k < 4; k++)    // right left down  Z    // R   L   D Z
            bKey[k] = (0x8000 & GetAsyncKeyState((unsigned char)("\x27\x25\x28Z"[k]))) != 0;

        //GAME LOGIC ======================
        // right
        nCurrentX += (bKey[0] && DoesPieceFit(nCurrentPiece, nCurrentRotation, nCurrentX + 1, nCurrentY)) ? 1 : 0;
        // left
        nCurrentX -= (bKey[1] && DoesPieceFit(nCurrentPiece, nCurrentRotation, nCurrentX - 1, nCurrentY)) ? 1 : 0;
        // down
        nCurrentY += (bKey[2] && DoesPieceFit(nCurrentPiece, nCurrentRotation, nCurrentX, nCurrentY + 1)) ? 1 : 0;

        // Z
        if (bKey[3]) //按下Z键
        {
            nCurrentRotation += (!bRotatedHold && DoesPieceFit(nCurrentPiece, nCurrentRotation + 1, nCurrentX, nCurrentY)) ? 1 : 0;
            bRotatedHold = true;
        }
        else //松开后, 再按才旋转
            bRotatedHold = false;

        if (bForceDown)
        {
            if (DoesPieceFit(nCurrentPiece, nCurrentRotation, nCurrentX, nCurrentY + 1))
                nCurrentY++; // It can, so do it!
            else
            {
                // Lock the current piece in the field
                for (int px = 0; px < 4; px++)
                    for (int py = 0; py < 4; py++)
                        if (tetromino[nCurrentPiece][Rotate(px, py, nCurrentRotation)] == L'X')
                            pField[(nCurrentY + py) * nFieldWidth + (nCurrentX + px)] = nCurrentPiece + 1;

                nPieceCount++;
                if (nPieceCount % 10 == 0)
                    if (nSpeed >= 10) nSpeed--; //nSpeed越小, 下落速度越快

                // check have we have got any lines
                for (int py = 0; py < 4; py++)
                    if (nCurrentY + py < nFieldHeight - 1) //遍历方块每一行, 并保证不出界
                    {
                        bool bLine = true;
                        for (int px = 1; px < nFieldWidth - 1; px++) // 排除左右边界的列
                            bLine &= (pField[(nCurrentY + py) * nFieldWidth + px]) != 0;

                        if (bLine)
                        {
                            // Remove Line, set to =
                            for (int px = 1; px < nFieldWidth - 1; px++) //排除左右边界
                                pField[(nCurrentY + py) * nFieldWidth + px] = 8; // 二维索引

                            vLines.push_back(nCurrentY + py);
                        }
                    }

                nScore += 25;
                if (!vLines.empty()) nScore += (1 << vLines.size()) * 100; //2的vLines.size()次方

                // choose next piece
                nCurrentX = nFieldWidth / 2;
                nCurrentY = 0;
                nCurrentRotation = 0;
                nCurrentPiece = rand() % 7; // 0~6 随机方块

                // if piece does not fit
                bGameOver = !DoesPieceFit(nCurrentPiece, nCurrentRotation, nCurrentX, nCurrentY);
            }
            nSpeedCounter = 0; //持续下落
        }


        // RENDER OUTPUT =================== 渲染输出

        // Draw Field
        for(int x = 0; x < nFieldWidth; x++)
            for(int y = 0; y < nFieldHeight; y++)
                screen[(y + 2) * nScreenWidth + (x + 2)] = L" ABCDEFG=#"[pField[y*nFieldWidth + x]];

        // Draw Current Piece
        for (int px = 0; px < 4; px++)
            for (int py = 0; py < 4; py++)
                if (tetromino[nCurrentPiece][Rotate(px, py, nCurrentRotation)] == L'X')
                    screen[(nCurrentY + py + 2)*nScreenWidth + (nCurrentX + px + 2)] = nCurrentPiece + 65;

        // Draw Score
        snwprintf(&screen[2 * nScreenWidth + nFieldWidth + 6], 16, L"SCORE: %8d", nScore);

        if (!vLines.empty())
        {
            // Display Frame (cheekily to draw lines)
            WriteConsoleOutputCharacterW(hConsole, screen, nScreenWidth * nScreenHeight, { 0,0 }, &dwBytesWritten);
            this_thread::sleep_for(400ms); // Delay a bit

            for (auto &v : vLines)
                for (int px = 1; px < nFieldWidth - 1; px++) //排除左右边界
                {
                    for (int py = v; py > 0; py--)
                        pField[py * nFieldWidth + px] = pField[(py - 1) * nFieldWidth + px];
                    pField[px] = 0;
                }

            vLines.clear();
        }

        // Display Frame
        WriteConsoleOutputCharacterW(hConsole, screen, nScreenWidth * nScreenHeight, { 0,0 }, &dwBytesWritten);
    }

    // 游戏结束 查看分数
    CloseHandle(hConsole);
    cout<< "Game Over!! Score:"<< nScore << endl;
    system("pause");

    return 0;
}
// Created by 86138 on 2024/3/19.
//

// Created by 86138 on 2024/3/19.
//
