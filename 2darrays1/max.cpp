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
    int max=INT_MIN;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           if(max<arr[i][j]){
            max=arr[i][j];
           }
        }
    }
    cout<<max;
    cout<<endl;
    int Secondmax=INT_MIN;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(Secondmax<arr[i][j] && arr[i][j]!=max){
                Secondmax=arr[i][j];
            }
        }
    }
    cout<<Secondmax;
}