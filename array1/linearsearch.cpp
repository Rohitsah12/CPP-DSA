#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x;
    cin>>x;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //check mark
    bool flag=false;
    for(int i=0;i<n;i++){
        if(x==arr[i]){
            flag=true;
        }
    }
    if(flag==true) cout<<"Element found";
    else cout<<"Not found";
}