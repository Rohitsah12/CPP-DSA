#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,p,q;
    cin>>n>>p>>q;
    if(n>p&&n>q){
        cout<<n;
    }
    else if(p>n&&p>q){
        cout<<p;  
    }
    else{
        cout<<q;
    }
}