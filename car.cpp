/* 
Name: Elton Mwangi
Reg no: BSC-03-0112/2025
Description: displaying car details and calculating milage
*/
#include <iostream>
using namespace std;

class Car{
private:
string brand; 
string model;
float price;
int mileage;


public:
//constructor with parameter.
    Car(string a, string b, float c, int d){

        brand = a;
        model = b;
        price = c;
        mileage= d;
    }

    //function to display car details
    void display(){
        cout << "Brand: " <<brand << endl;
        cout << "Model: " <<model << endl;
        cout << "Price: " <<price << endl;
        cout << "Mileage: " <<mileage <<  "km" <<endl;

    }

    //Function to update milage after driving

    void drive(int distance){
        mileage += distance;
        cout <<"car driven for "<< distance << "km" << endl;
        }

 

    //destructor
    ~Car(){
        cout<<"This is a destructor"<<endl;

    }

};
// create car object
int main(){
Car car1("Toyota", "Corolla", 20000, 5000);

// display car details
car1.display();

//simulate driving for 150 miles
car1.drive(150);
cout<<"Updated mileage after 150km: ";
car1.display();

//simulate driving for 300 miles
car1.drive(300);
cout<<"Updated mileage after 300 km: ";
car1.display();
 

    return 0;
}