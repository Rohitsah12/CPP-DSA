#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=n;
    int sum=0;
    while(n>0){
        a=n%10;
        sum+=a;
        n/=10;
    }
    if(a==0) cout<<0;
    else cout<<sum;
}
