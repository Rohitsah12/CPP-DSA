#include<bits/stdc++.h>
using namespace std;
void display(vector<int>&a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> a;
    vector<int> b;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    for(int i=n-1;i>=0;i--){
        b.push_back(a[i]);
    }
    // for(int i=0;i<a.size();i++){
    //     cout<<a[i]<<" ";
    // }
    display(a);
    cout<<endl;
    // for(int i=0;i<b.size();i++){
    //     cout<<b[i]<<" ";
    // }
    display(b);

}