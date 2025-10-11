#include <iostream>
using namespace std;
//Base calss
class Person{
    protected:
    string name;

    public:
    void setName(string n){
        name=n;
    }
    string getName(){
        return name;
    }
};
//Derived class
class LibraryMember: public Person {
private:
 int memberID;
 int booksBorrowed;

// constructor to initialize name, memberID, and booksBorrowed
public:
LibraryMember(string n, int id, int books){
    setName(n);
    memberID = id;
    booksBorrowed = books;  
}
//public member functions
    int getMemberID(){
        return memberID;
    };
    int getbooksBorrowed(){
        return booksBorrowed;
    };
};
//derived class premium member
class PremiumMember: public LibraryMember{
private:
double membershipFee;
//constructor to initialize name, memberID, booksBorrowed, and membershipFee
public:
PremiumMember(string n, int id, int books, double fee):  
LibraryMember( n, id, books){
    membershipFee= fee;
}
//get membership fee function
    double getmembershipFee(){
        return membershipFee;
    }
};
int main(){
    PremiumMember pm("Norman", 103, 4, 100.00);
    cout << "Memeber Name:" << pm.getName()<<endl;
    cout << "Member ID:"<<pm.getMemberID()<< endl;
    cout << "Books Borrowed:"<<pm.getbooksBorrowed()<<endl;
    cout << "Membership fee:ksh"<<pm.getmembershipFee()<<endl;
    return 0;
}
   