#include<bits/stdc++.h>
using namespace std;
int main(){
    int x=5;
    int* ptr=&x;
    int** p=&ptr;
    cout<<x<<endl;
    cout<<ptr<<endl;//x address
    cout<<p<<endl;//ptr address
}