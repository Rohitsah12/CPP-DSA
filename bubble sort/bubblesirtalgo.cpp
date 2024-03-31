#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n]={5,4,6,3,2,1};
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //bubble sort
    // for(int i=0;i<n-1;i++){//n-1 passes
    //     //traverse
    //     for(int j=0;j<n-1-i;j++){
    //         if(arr[j]>arr[j+1]){
    //             swap(arr[j],arr[j+1]);
    //     }
    // }
    // }
    //bubble sort optimised
    for(int i=0;i<n-1;i++){//n-1 passes
        //traverse
        bool flag=true;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag=false;
        }
    }
    if(flag==true){//swap didn't happen
        break;
    }
    }
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}
