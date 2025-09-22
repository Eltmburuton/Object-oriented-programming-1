/*
Name: Elton Mwangi
Reg no: BSC-03-0112/2025
Description: Calculate SurfaceArea and Volume of cylinder
*/
#include<iostream>
using namespace std;
class Cylinder{
    public:

    double radius;
    double height;
    const double pi=3.14;
     // member functions
     double calculateSurfaceArea(){
        return (2*pi*radius*radius) +(2*pi*radius*height);

     }
     double calculateVolume(){
        return pi*radius*radius*height;
     }


};
int main(){
//objects
Cylinder cy1;

double surfacearea, volume;

//prompt inputs
cout<<"Enter the radius of the cylinder:"<<endl;
cin>> cy1.radius;

cout<<"Enter the height of the cylinder: "<<endl;
cin>> cy1.height;

//function call
surfacearea= cy1.calculateSurfaceArea();
volume=cy1.calculateVolume();

cout<<"The Surface Area is: "<<surfacearea<<endl;

cout<<"The volume is: "<<volume<<endl;




return 0;

}

