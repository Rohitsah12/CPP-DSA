#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;//you need not mention size
    //inserting/input donot use square bracket[]
    v.push_back(6);
    cout<<v.capacity()<<endl;
    v.push_back(1);
    cout<<v.capacity()<<endl;
    v.push_back(9);
     cout<<v.capacity()<<endl;
    v.push_back(0);
     cout<<v.capacity()<<endl;
    //if you want to update/access use [] brackets
    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<" ";
}