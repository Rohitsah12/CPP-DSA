#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=n;
    int factorial=1;
    while(n>1){
        factorial*=n;
        cout<<n<<"*";
        n=n-1;
        
    }
    if(a==0) cout<<endl<<1;
    else cout<<endl<<factorial;
}