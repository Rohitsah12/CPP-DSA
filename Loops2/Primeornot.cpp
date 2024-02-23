#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool flag=true; //True means prime
    for(int i=2;i<n-1;i++){
        if(n%i==0){
            flag=false;
            break;
        } 
    }
    if(n==1) cout<<"Not prime nor compositr";
    else if(flag==true) cout<<"Prime";
    else cout<<"Composite";
}