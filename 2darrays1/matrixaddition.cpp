#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n,a,b;
    cin>>m>>n>>a>>b;
    int arr[m][n];
    int brr[a][b];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>brr[i][j];
        }
    }
    if(m!=a && n!=b) cout<<"Matrix addition doesnot applicable";
    int sum=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            sum=arr[i][j]+brr[i][j];
            cout<<sum<<" ";
        }
        cout<<endl;
    }
}