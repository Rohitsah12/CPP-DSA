#include<bits/stdc++.h>
using namespace std;
int main(){
    // int x=7;
    // int* ptr=&x;
    // cout<<ptr<<endl;
    // ptr=ptr+1;
    // cout<<ptr<<endl;
    int x=4;
    int* ptr=&x;
    cout<<*ptr<<endl;
    *ptr=*ptr+1;
    cout<<*ptr<<endl;
}