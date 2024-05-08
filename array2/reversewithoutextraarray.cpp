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
     int n;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    // int i=0;
    // int j=a.size()-1;
    // while(i<=j){
    //     //swap a[i] and a[j]
    //     int temp=a[i];
    //     a[i]=a[j];
    //     a[j]=temp;
    //     i++;
    //     j--;
    // }
    // for(int i=0,j=a.size()-1;i<=j;i++,j--){
    //     int temp=a[i];
    //    a[i]=a[j];
    //    a[j]=temp;
    // }
    // reverse(a.begin(),a.end());
    int i,j;
    cin>>i>>j;
    reveresepart(i,j,a);
    display(a);
}