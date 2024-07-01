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

int optimizedSlidingWindow(vector<int>arr,int k){
    int maxi=INT_MIN;
    int sum=0;
    for(int i=0;i<k;i++){
        sum+=arr[i];
    }
    maxi=max(maxi,sum);
    for(int i=k;i<n;i++){
        int first=i-k;
        sum=sum+arr[i];
        sum=sum-arr[first];
    }
    maxi=max(maxi,sum);

}
//Store Negative elements of the first windows
int frist_windows_negative(vector<int>arr,int k){
    deque<int>dq;
    for(int i=0;i<k;i++){
        if(arr[i]<0){
            dq.push_back(i);
        }
    }
    //print the answer for the first windows
    if(dq.empty()==true){
        cout<<0<<" ";
    }
    else{
        cout<<arr[dq.front()]<<" ";
    }

    //use another loop to silde window one at a time
    for(int i=k;i<n;i++){
        int add_index=i;
        int remove_index=i-k;
        if(dq.front()==remove_index){
            dq.pop_front();
        }
        if(arr[add_index]<0){
            dq.push_back(add_index);
        }
        //We are at a new window so print the answer
         if(dq.empty()==true){
        cout<<0<<" ";
    }
    else{
        cout<<arr[dq.front()]<<" ";
    }
    }
}