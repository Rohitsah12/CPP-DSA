#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="raghav is a maths teacher. he is a DSA mentor as well";
    stringstream ss(s);
    string temp;
    vector<string> v;
    while(ss>>temp){
        v.push_back(temp);
    }
    sort(v.begin(),v.end());//same chizein ek saath aajayegii
    int maxcount=0;
    int count=0;
    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]) count++;
        else count=1;
        maxcount=max(maxcount,count);
    }
    count=1;
     for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]) count++;
        else count=1;
        if(count==maxcount){
            cout<<v[i]<<" "<<maxcount<<endl;
        }
    }
    
    

}