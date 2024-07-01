#include<bits/stdc++.h>
using namespace std; 
 int slidingwindow(vector<int> arr,int k){
    int maxi=INT_MIN;
    int n=arr.size();
    for(int i=0;i<n-k+1;i++){
        int sum=0;
        for(int j=i;j<=k+i-1;j++){
            sum+=arr[j];
        }
        maxi=max(maxi,sum);
    }

 }