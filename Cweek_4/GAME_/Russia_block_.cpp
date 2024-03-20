#include <iostream>
#include <wchar.h>
#include <windows.h>
#include <thread>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
    std::chrono::milliseconds operator""ms(unsigned long long milliseconds)
    {
        return std::chrono::milliseconds(milliseconds); //防止while循环开头的sleep_for()报错
    }
wstring tetromino[7];
int nFieldWidth=12;
int nFieldHeight=18;
unsigned char *pField=nullptr;

int nScreenWidth=80;
int nScreenHeight=30;


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

bool DoesPieceFit(int nTetromino,int nRotation,int nPosX,int nPosY){
    for(int px=0;px<4;px++)
        for(int py=0;py<4;py++) {
            int pi = Rotate(px, py, nRotation);
            int fi = (nPosY + py) * nFieldWidth + (nPosX + px);
            if (nPosX + px >= 0 && nPosX + px < nFieldWidth)
                if (nPosY + py >= 0 && nPosY + py < nFieldHeight)
                    if (tetromino[nTetromino][pi] == L'X' && pField[fi] != 0)//碰撞检测
                        return false;
        }
    return true;
}

int main(){
    tetromino[0].append(L"..X.");
    tetromino[0].append(L"..X.");
    tetromino[0].append(L"..X.");
    tetromino[0].append(L"..X.");

    tetromino[1].append(L"..X.");
    tetromino[1].append(L".XX.");
    tetromino[1].append(L".X..");
    tetromino[1].append(L"....");

    tetromino[2].append(L".X..");
    tetromino[2].append(L".XX.");
    tetromino[2].append(L"..X.");

    tetromino[3].append(L"....");
    tetromino[3].append(L".XX.");
    tetromino[3].append(L".XX.");
    tetromino[3].append(L"....");

    tetromino[4].append(L"..X.");
    tetromino[4].append(L".XX.");
    tetromino[4].append(L"..X.");
    tetromino[4].append(L"....");

    tetromino[5].append(L"....");
    tetromino[5].append(L".XX.");
    tetromino[5].append(L"..X.");
    tetromino[5].append(L"..X.");

    tetromino[6].append(L"....");
    tetromino[6].append(L".XX.");
    tetromino[6].append(L".X..");
    tetromino[6].append(L".X..");

    pField=new unsigned char[nFieldWidth*nFieldHeight];
    for(int x=0;x<nFieldWidth;x++){
        for(int y=0;y<nFieldHeight;y++){
            pField[y*nFieldWidth+x]=(x==0||x==nFieldWidth-1||y==nFieldHeight-1)?9:0;
        }
    }

    wchar_t *screen=new wchar_t[nScreenWidth*nScreenHeight];
    for(int i=0;i<nScreenWidth*nScreenHeight;i++){
        screen[i]=L' ';
    }
    HANDLE hConsole=CreateConsoleScreenBuffer(GENERIC_READ|GENERIC_WRITE,0,NULL,CONSOLE_TEXTMODE_BUFFER,NULL);
    SetConsoleActiveScreenBuffer(hConsole);
    DWORD dwBytesWritten=0;

    bool bKey[4];
    bool bGameOver=false;
    bool bRotateHold=false;

    int nCurrentPiece=0;
    int nCurrentRotation=0;
    int nCurrentX=nFieldWidth/2;
    int nCurrentY=0;

    int nSpeed=20;
    int nSpeedCounter=0;
    bool bForceDown= false;

    int nPieceCount=0;//难度设置
    int nScore=0;
    vector <int> vLines;


    while(!bGameOver) {

        this_thread::sleep_for(50ms);
        nSpeedCounter++;
        bForceDown = (nSpeedCounter == nSpeed);

        for (int k = 0; k < 4; k++)
            bKey[k] = (0x8000 & GetAsyncKeyState((unsigned char) ("\x27\x25\x28Z"[k]))) != 0;

        nCurrentX += (bKey[0] && DoesPieceFit(nCurrentPiece, nCurrentRotation, nCurrentX + 1, nCurrentY)) ? 1 : 0;
        nCurrentX -= (bKey[1] && DoesPieceFit(nCurrentPiece, nCurrentRotation, nCurrentX - 1, nCurrentY)) ? 1 : 0;
        nCurrentY += (bKey[2] && DoesPieceFit(nCurrentPiece, nCurrentRotation, nCurrentX, nCurrentY + 1)) ? 1 : 0;

        if (bKey[3]) {
            nCurrentRotation += (!bRotateHold &&
                                 DoesPieceFit(nCurrentPiece, nCurrentRotation + 1, nCurrentX, nCurrentX)) ? 1 : 0;
            bRotateHold = true;
        } else
            bRotateHold = false;

        if (bForceDown) {
            if (DoesPieceFit(nCurrentPiece, nCurrentRotation, nCurrentX, nCurrentY + 1))
                nCurrentY++;
            else {
                for (int px = 0; px < 4; px++)
                    for (int py = 0; py < 4; py++)
                        if (tetromino[nCurrentPiece][Rotate(px, py, nCurrentRotation)] == L'X')
                            pField[(nCurrentY + py) * nFieldWidth + (nCurrentX + px)] = nCurrentPiece + 1;//将方块放置在场地上

                nPieceCount++;
                if (nPieceCount % 10 == 0)
                    if (nSpeed >= 10) nSpeed--;

                for (int py = 0; py < 4; py++)
                    if (nCurrentY + py < nFieldHeight - 1) {
                        bool bLine = true;
                        for (int px = 1; px < nFieldWidth - 1; px++)
                            bLine &= (pField[(nCurrentY + py) * nFieldWidth + px]) != 0;//检查行是否已满

                        if (bLine) {
                            for (int px = 1; px < nFieldWidth - 1; px++)
                                pField[(nCurrentY + py) * nFieldWidth + px] = 8;//清除行

                            vLines.push_back(nCurrentY + py);
                        }
                    }
                nScore += 25;
                if (!vLines.empty()) nScore += (1 << vLines.size()) * 100;//奖励分数

                nCurrentX = nFieldWidth / 2;
                nCurrentY = 0;
                nCurrentRotation = 0;
                nCurrentPiece = rand() % 7;

                bGameOver = !DoesPieceFit(nCurrentPiece, nCurrentRotation, nCurrentX, nCurrentY);
            }
            nSpeedCounter = 0;
        }

        //  while(!GetAsyncKeyState(VK_ESCAPE)){//游戏循环
        for (int x = 0; x < nFieldWidth; x++)
            for (int y = 0; y < nFieldHeight; y++)
                screen[(y + 2) * nScreenHeight + (x + 2)] = L" ABCDEFG=#"[pField[y * nFieldWidth + x]];

//
//    WriteConsoleOutputCharacterW(hConsole,screen,nScreenWidth*nScreenHeight,{0,0},&dwBytesWritten);

        for (int px = 0; px < 4; px++)
            for (int py = 0; py < 4; py++)
                if (tetromino[nCurrentPiece][Rotate(px, py, nCurrentRotation)] == L'X')// 检查方块是否存在于当前位置
                    screen[(nCurrentY + py + 2) * nScreenHeight + (nCurrentX + px + 2)] =
                            nCurrentPiece + 65; // 将方块绘制到屏幕上（加上适当的偏移量）

        snwprintf(&screen[2 * nScreenWidth + nFieldWidth + 6], 16, L"SCORE:%8d", nScore);

        if (!vLines.empty()) {
            WriteConsoleOutputCharacterW(hConsole, screen, nScreenWidth * nScreenHeight, {0, 0}, &dwBytesWritten);
            this_thread::sleep_for(400ms);//延迟一点

            for (auto &v: vLines)
                for (int px = 1; px < nFieldWidth - 1; px++) {
                    for (int py = v; py > 0; py--)
                        pField[py * nFieldWidth + px] = pField[(py - 1) * nFieldWidth + px];
                    pField[px] = 0;
                }
            vLines.clear();
        }

        WriteConsoleOutputCharacterW(hConsole, screen, nScreenWidth * nScreenHeight, {0, 0}, &dwBytesWritten);
    }
    CloseHandle(hConsole);
    cout << "Game Over!! Score:" << nScore << endl;
    system("pause");

    return 0;
}
// Created by 86138 on 2024/3/19.
//
