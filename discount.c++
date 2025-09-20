/*
name:Elton Mwangi
reg no:Bcs-03-0112/2025
description: Discount Question
*/
#include <iostream>
using namespace std;

int main() {
   int price;
   double discount=0.0;
  double discountedamount;
   double total;
  
   cout<<"Enter price of purchase"<<endl;
   cin>>price;
   
   if (price<1000){
   discount=0.0;
   }
   else if (price >=1000 && price<=5000){
       discount=0.1*price;
   }
   
   else if (price >5000){
       discount = 0.2*price;
   }
   
   discountedamount=discount;
   total=price-discount;
   
   cout<<"Your Discount is:"<<discount<<endl;
   cout <<"Total after discout is:"<<total<<endl;
   
   
   
    
    return 0;
    
}