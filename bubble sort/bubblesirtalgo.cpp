#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[6]={5,4,6,3,2,1};
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //bubble sort
    for(int i=0;i<6-1;i++){//n-1 passes
        //traverse
        for(int j=0;j<6-1;j++){
            if(arr[j]>arr[j+1]){
                //swap
                // int temp=arr[j];
                // arr[j]=arr[j+1];
                // arr[j+1]=temp;
                swap(arr[j],arr[j+1]);
        }
    }
    }
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}
