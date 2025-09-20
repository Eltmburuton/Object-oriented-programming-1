/*  
Name: Elton Mwangi
Reg no: BSC-03-0112/2025
Description: Program to compute simple interest and then calculate discount on purchase
*/

# include <iostream>
using namespace std;
//Function prototype for simple interest.
float simple_interest(float rate, int time, int principle);
//Function to calculate discount
double calculate_discount(double price){
    if (price<1000){
        return 0.0;

    }
    else if (price>=1000 && price <=5000){
        return 0.1*price;

    }
    else { //price>5000
        return 0.2*price;
    }
    
}
 // functio definition for simple interest

    float simple_interest(float rate, int time, int principle){
        float interest;
        interest =principle *rate/100*time;
        return interest;
    }
int main()
{
    // S_interest section
    float s_interest, rate, principle;
    int time;
    cout<< "Enter rate, time and principle:"<<endl;
    cin>> rate>>time>>principle;
    s_interest=simple_interest(rate,time,principle);
    cout<<"The simple interest is:"<<s_interest<<endl;

   

    //Discout Section
    double price, discount, total;
    cout<<"Enter the price of purchase:"<<endl;
    cin>> price;
    discount =calculate_discount(price);
    total = price-discount;

    cout<<"Your discount is:"<<discount<<endl;
    cout<<"Your total after discount is:"<<total<<endl;

    return 0;
}