#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int max=INT_MIN;
    for(int i=0 ;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
        if(max<arr[i]) max=arr[i];
    }
    cout<<max;
}