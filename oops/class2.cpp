#include<bits/stdc++.h>
using namespace std;
class Customer{
    string name;
    int account_number;
    int balance;
    public:
    //default constructor
    Customer(){
        name="Rohit";
        account_number=5;
        balance=100;
    }
    //Parameterised Constructor
    // Customer(string name,int account_number,int balance){
    //     this->name=name;
    //     this->account_number=account_number;
    //     this->balance=balance;
    // }
    //constructor overloading
    Customer(string a,int b){
        name=a;
        account_number=b;
        balance=50;
    }
    //Inline constructor
    inline Customer(string a,int b,int c): name(a),account_number(b),balance(c){
        
    }
    void display(){
        cout<<name<<" "<<account_number<<" "<<balance<<endl;  
    }
};
int main(){
    Customer A1;
    Customer A2("Rohit",23,1000);
    Customer A3("Mohit",25);
    A1.display();
    A2.display();
    A3.display();
}