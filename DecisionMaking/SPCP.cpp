#include<bits/stdc++.h>
using namespace std;
int main(){
    int sp;
    int cp;
    cin>>sp>>cp;
    if(sp>cp){
        cout<<"Profit\n";
        cout<<sp-cp;
    }
    else if(sp=cp){
        cout<<"Neither Loss Nor Profit";
    }
    else{
        cout<<"Loss";
        cout<<"cp-sp";
    }

    } 