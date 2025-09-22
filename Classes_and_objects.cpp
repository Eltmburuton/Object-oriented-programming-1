/*
Name: Elton Mwangi
Reg no: BSC-03-0112/2025
Description: CPP classes and objects
*/
#include<iostream>
using namespace std;
class Room{
    public:
    double length, width, height;
    //member functions
    double calculateArea(){
        return length*width;
    }
    double calculateVolume(){
        return length*width*height;
    }


};
int main(){
    //create objects
    Room room1,room2,room3;

    float area, volume;

    room1.length=30;
    room1.width=45;
    room1.height=20;

//function call
area = room1.calculateArea();
volume= room1.calculateVolume();

cout<<"The area is: "<<area <<endl;
cout<<"The volume is: "<<volume <<endl;

    return 0;

}