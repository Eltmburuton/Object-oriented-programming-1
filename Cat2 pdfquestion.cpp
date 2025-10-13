/*
Name: Elton Mwangi
Reg no: BSC-03-0112/2025
Description: CAT 2 PDF QUESTION
*/
#include <iostream>
using namespace std;
class Person{
    protected:
    string name;
    //member functions to set and get name
    public:
    void setname(string n){
        name=n;
    };
    string getname(){
        return name;
    };
};
//derived class library member
class LibraryMember: public Person{
private:
int memberID;
int BooksBorrowed;
//constructor to initialize variables.
public:
LibraryMember(string n, int MID, int BB){
setname (n);
memberID =MID;
BooksBorrowed=BB;
};
int getMemberID(){
    return memberID;
};
int getbooksBorrowed(){
    return BooksBorrowed;
};
};
//another derived class premium member
class PremiumMember: public LibraryMember{
    private:
    double membershipFee;
    //consturctor to intitialize previous variables and membershipfee
    public:
    PremiumMember(string n,int MID, int BB, double fee): 
    LibraryMember(n,MID,BB){
    membershipFee=fee;
    };
    //member function to get fee
    double getmembershipFee(){
      return membershipFee;  
    };
    
    
};
int main(){
    PremiumMember pm ("Elton", 20, 15,2000.00);
    cout <<"Member name: "<<pm.getname()<<endl;
    cout<<"Member ID: "<<pm.getMemberID()<<endl;
    cout<<"Books Borrowed:"<<pm.getbooksBorrowed()<<endl;
    cout<< "Membership fee:"<<pm.getmembershipFee()<<endl;
return 0;
};