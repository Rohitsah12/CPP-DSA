#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    vector<int> v;
    for(int i=0;i<5;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    // int idx=-1;
    // for(int i=0;i<v.size();i++){
    //     if(v[i]==x){
    //         idx=i;
    //     }
    // }
    // cout<<idx;
    for(int i=v.size()-1;i>=0;i--){
        if(v[i]==x){
            cout<<i;
            break;
        }
    }
}