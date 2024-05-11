#include<bits/stdc++.h>
using namespace std;
class Customer{
    string name;
    int *data;
    public:
    Customer(string name){
        this->name;
        cout<<"constructor is "<<name<<endl;
    }
    //Destructor
    ~Customer(){
        cout<<"destructor is"<<name<<endl;
    }
};
int main(){
    Customer A1("1"),A2("2"),A3("3");
}