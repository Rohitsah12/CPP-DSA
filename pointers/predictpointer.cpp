#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=15;
    int* ptr=&a;
    int b=++*ptr;
    cout<<a<<" "<<b;
}