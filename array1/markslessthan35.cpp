#include<bits/stdc++.h>
using namespace std;
int main(){
    int marks[6];
    for(int i=0 ; i<6;i++){
        cin>>marks[i];
    }
    for(int i=0;i<6;i++){
        if(marks[i]<35){
            cout<<i<<" ";
        }
    }
}