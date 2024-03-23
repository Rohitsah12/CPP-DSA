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
    int smax=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]!=max && smax<arr[i]) smax=arr[i];
    }
    cout<<max<<endl<<smax;
}