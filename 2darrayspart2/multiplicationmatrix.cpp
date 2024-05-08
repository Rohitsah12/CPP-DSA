#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n,a,b;
    cin>>m>>n>>a>>b;
    if(n==a){
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
        int res[m][b];
        for(int i=0;i<m;i++){
            for(int j=0;j<b;j++){
                res[i][j]=0;
                for(int k=0;k<n;k++){
                    res[i][j]+=arr[i][k]*brr[k][j];
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"Matrix multiplication doesnot supported";
    }
}