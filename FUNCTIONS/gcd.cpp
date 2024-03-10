#include<bits/stdc++.h>
using namespace std;
// int gcd(int a, int b){
//     int hcf=1;
//     for(int i=1;i<=min(a,b);i++){
//         if(a%i==0 && b%i==0){
//             //i is a common factor
//             hcf=i;
//         } 
//     }
//     return hcf;
// }
int gcd(int a, int b){
    int hcf=1;
    for(int i=min(a,b);i>=1;i--){
        if(a%i==0 && b%i==0){
            //i is a common factor
            hcf=i;
            break;
        } 
    }
    return hcf;
}
int main(){
    int a;
    cin>>a;
    int b;
    cin>>b;
    cout<<gcd(a,b);
}