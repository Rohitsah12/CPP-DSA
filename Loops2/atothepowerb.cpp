#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int z;
    if(b<0){
        z=-1*b;
    }
    else z=b;
    float power=1;
    while(z>0){
        power*=a;
        z=z-1;
    }
    if(b<0){
        cout<<(1/power);
    }
    else{
        cout<<power;
    }
    
}
