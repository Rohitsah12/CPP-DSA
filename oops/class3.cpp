#include<bits/stdc++.h>
using namespace std;
class Customer{
    string name;
    int *data;
    public:
    Customer(){
        name="Rohit";
        data = new int;
        *data=10;
        cout<<"Customer is called\n";
    }
    //Destructor
    ~Customer(){
        delete data;
        cout<<"Destructor is called";
    }
};
int main(){
    Customer A1;
}