#include <iostream>
#include <string>
using namespace std;
class Building;
class Special_license{
public:
    Special_license();
    void people_1();
    void people_2();
    Building * building; //pointer to class Building
};
class Building{
    friend void Special_license ::people_1();
public:
    Building();
    string my_livingroom;
private:
    string my_bedroom;
};
Special_license::Special_license(){
    building=new Building; // create a new object of class Building and assign it to the pointer building of class Special_license
                            // new is used to create a new object of class Building
}
void Special_license::people_1(){
    cout << "people_1 is visiting" << building->my_livingroom<<endl;
    cout << "people_2 is visiting" << building->my_bedroom <<endl;
}
void Special_license::people_2(){
    cout << "people_2 is visiting" << building->my_livingroom <<endl;
    //cout << "people_2 is visiting" << building->my_bebroom <<endl;
}
void test(){
    Special_license SL;//create an object of class Special_license
    SL.people_1();
    SL.people_2();
}
int main(){
    test();
    return 0;
}
//
////class friend function
//#include <iostream>
//#include <string>
//using namespace std;
//class Building;
//class Special_license{
//public:
//    Special_license();
//    void people_1();
//    void people_2();
//    Building * building; //pointer to class Building
//private:
//
//
//};
//class Building{
////    friend void Special_license::people_1();
//      friend class Special_license;//two ways all are ok.
//public:
//    Building();
//    string my_livingroom;
//private:
//    string my_bedroom;
//};
//Building::Building(){
//    my_livingroom="Living Room";
//    my_bedroom="Bedroom";
//}
//Special_license::Special_license(){
//    building=new Building; // create a new object of class Building and assign it to the pointer building of class Special_license
//                            // new is used to create a new object of class Building
//
//}
//void Special_license::people_1(){
//    cout << "people01 is visiting" << building->my_livingroom<<endl;
//    cout << "people01 is visiting" << building->my_bedroom <<endl;
//}
//void Special_license::people_2(){
//    cout << "people02 is visiting" << building->my_livingroom << endl;
//    cout << "people02 is visiting" << building->my_bedroom << endl;
//}
//void test(){
//    Special_license SL;//create an object of class Special_license
//    SL.people_1();
//    SL.people_2();
//}
//
//int main(){
//    test();
//    return 0;
//}


//// global friend function
//#include <iostream>
//#include <string>
//using namespace std;
//class Building{
//    friend void Special_license1(Building * building);
//    friend void Special_license2(Building & building);
//    friend void Special_license3(Building building);
//public:
//    Building(){
//        my_bedroom="Bedroom";
//        my_kitchen="Kitchen";
//        my_livingroom="Living Room";
//    }
//    string my_livingroom;
//protected:
//    string my_kitchen;
//private:
//    string my_bedroom;
//};
//void Special_license1(Building * building)//function to access private members
//{
//    cout << "people0 is visiting(address)" << building->my_bedroom << endl;
//    cout << "people0 is visiting(address)" << building->my_kitchen << endl;
//    cout << "people0 is visiting(address)" << building->my_livingroom << endl;
//}
//void Special_license2(Building & building){
//    cout << "people1 is visiting(reference)" << building.my_bedroom << endl;
//    cout << "people1 is visiting(reference)" << building.my_kitchen << endl;
//    cout << "people1 is visiting(reference)" << building.my_livingroom << endl;
//}
//void Special_license3(Building building){
//    cout << "people2 is visiting(value)" << building.my_bedroom << endl;
//    cout << "people2 is visiting(value)" << building.my_kitchen << endl;
//}
//void test(){
//    Building building;
//    Special_license1(&building);
//    Special_license2(building);
//    Special_license3(building);
//
//}
//int main(){
//    test();
//}
