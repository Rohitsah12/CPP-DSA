#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int y;
        cin>>y;
        v.push_back(y);
    }
    for(int i=0;i<v.size()-1;i++){
        for(int j=i+1;j<v.size();j++){
            if(v[i]+v[j]==x){
                cout<<i<<','<<j<<endl;
            }
        }
    }

}