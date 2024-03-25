#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int min=INT_MAX;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           if(min>arr[i][j]){
            min=arr[i][j];
           }
        }
    }
    cout<<min;
}