/*
Name: Elton Mwangi
Reg no: BSC-03-0112/2025
Description: Product of 3 numbers
*/
#include<iostream>
using namespace std;

class addition{
    public:
    int a,b,c;

    //member functions
    int calculateProduct(){
        return a*b*c;
    }
};
int main(){
    // objects

    addition add1;

    int product;

    add1.a=22;
    add1.b=30;
    add1.c=50;
    // function call
    product=add1.calculateProduct();

    cout<<"The product is: "<<product<<endl;
    return 0;
}
