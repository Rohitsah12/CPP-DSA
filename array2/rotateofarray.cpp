#include<bits/stdc++.h>
using namespace std;
void display(vector<int>&a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}
void reveresepart(int i,int j,vector<int>&a){
    for(i,j;i<=j;i++,j--){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
}
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    display(arr);
    cout<<endl;
    reveresepart(0,arr.size()-1-k,arr);
    reveresepart(arr.size()-k,arr.size()-1,arr);
    reverse(arr.begin(),arr.end());
    display(arr);
}