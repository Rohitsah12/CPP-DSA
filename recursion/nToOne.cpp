#include<bits/stdc++.h>
using namespace std;
void ntoOne(int n){
    if(n==0) return;
    cout<<n<<endl;
    ntoOne(n-1);
}

int main(){
    ntoOne(5);
}