#include<bits/stdc++.h>
using namespace std;
int main(){
    int nums[]={1,2,2,3,3,3,3,3,3,4,4,5,5,9};
    int n=13;
    int target=3;
    int low=0;
    int high=n-1;
    bool flag=false;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]==target){ 
            if(nums[mid-1]!=target){
                flag=true;
                cout<<mid;
                break;
            }
            else{
                high=mid-1;
            }
        }
        else if(nums[mid]<target) low=mid+1;
        else high=mid-1;
    }
    if(flag==false) cout<<-1;
}