#include<bits/stdc++.h>
using namespace std;
int stairpathWays(int n){
    if(n==2) return 2;
    if(n==1) return 1;
    return stairpathWays(n-1)+stairpathWays(n-2);
}
int main(){
    cout<<stairpathWays(4);
}