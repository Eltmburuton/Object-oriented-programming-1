/* 
Name: Elton Mwangi
Reg no: BSC-03-0112/2025
Description:
*/
#include <iostream>
using namespace std;

class Shape{
    protected:
    //protected data member
    string color;

    public:
    // constructor for color
    Shape(string c){
        color = c;
    }

    //public member function
    string getColor(){
        return color;
    }
};

//create derived class rectangle
class Rectangle:
public Shape{
    private:
    float length;
    float width;
    public:
    // constructor to initialize length, width and color
    Rectangle(float l, float w, string c) :
    Shape(c){
        length = l;
        width = w;
    }

// function to calculate area
float calcAreaRect(){
    return length*width;
}
};

//created class circle
class Circle:
public Shape{
    private:
    float radius;

    public:
//constructor to initialize radius and color
Circle(float r, string c): Shape(c){
    radius = r;
}

//Function to area of circle.
float calcAreaCirc(){
    return 3.14*radius*radius;
} 


};

int main(){
    //create a rectangle object
    Rectangle rect (10, 5, "red");

    //create a circle object
    Circle circ(7, "blue");

    //Dispaly retange details
    cout<<"Rectangle details"<<endl;
    cout<< "Color: " << rect.getColor() <<endl;
    cout<< "Area: " << rect.calcAreaRect() <<endl;

    //Display circle details
    cout<<"Circle details"<<endl;
    cout<< "Color: " << circ.getColor() <<endl;
    cout<< "Color: " << circ.calcAreaCirc() <<endl;
}