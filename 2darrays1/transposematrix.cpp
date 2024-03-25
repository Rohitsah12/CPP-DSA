#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    int brr[n][m];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            brr[i][j]=arr[j][i];
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
}