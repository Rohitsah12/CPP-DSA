#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=65;j<=64+n;j++){
            cout<<(char)j;
        }
        cout<<"\n";
    }
}