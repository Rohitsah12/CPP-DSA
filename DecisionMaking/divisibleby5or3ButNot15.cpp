#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%5==0||n%3==0){
        if(n%15!=0){
            cout<<"Yes";
        }

        else{
            cout<<"Not";
        }
    }
    else{
        cout<<"Not";
    }
}
