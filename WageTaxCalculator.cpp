/*  
Name: Elton Mwangi
Reg no: BSC-03-0112/2025
Description: Program to calculate gross pay, taxes, and net pay
*/

#include <iostream>
using namespace std;
// function to calculate grosspay
double calculate_grosspay(double hours, double wage){
    if(hours<=40){
        return hours*wage;

    }
    else{
        double overtime_hours= hours-40;
        return (40*wage) +(overtime_hours*wage*1.5);
    }
}

// Function to calculate taxes
double calculate_taxes(double grosspay){
    if (grosspay<=600){
return grosspay*0.15;        
    }
    else {
        return(600*0.15)+((grosspay - 600)*0.20);

    }
}

int main(){
    double hours, wage, grosspay, taxes,netpay;

    cout<<"Enter hours worked in a week:"; 
    cin>>hours;
    cout<<"Enter hourly wages:" <<endl;
    cin>> wage;

    //calculations
    grosspay = calculate_grosspay(hours, wage);
    taxes = calculate_taxes(grosspay);
    netpay = grosspay-taxes;

    cout<<"Gross pay is:"<<grosspay<<endl;
    cout<<"Taxes add up to:"<<taxes<<endl;
    cout<<"Net pay is:"<<netpay<<endl;

    return 0;

}