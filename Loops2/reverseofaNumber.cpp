#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=0;
    int reverse=0;
    while(n>0){
        reverse*=10;
        a=n%10;
        reverse+=a;
        n/=10;
    }
    cout<<reverse;
}