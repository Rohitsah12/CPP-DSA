#include<bits/stdc++.h>
using namespace std;
// void sumonetoN(int add,int n){
//     if(n==0){
//         cout<<add<<endl;
//         return;
//     }
//     sumonetoN(add+n,n-1);
// }
int sumonetoN(int n){
    if(n==1) return 1;
    return n+sumonetoN(n-1);
}
int main(){
    cout<<sumonetoN(6);
} 