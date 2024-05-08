#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="AZYZXBDJKX";
    string str="";
    for(int i=0;i<s.size();i++){
        if(s[i]>='X'){
            str.push_back(s[i]);
        }
    }
    cout<<str<<endl;
    for(int i=0;i<str.size()-1;i++){
        bool flag=true;
        for(int j=0;j<str.size()-1-i;j++){
            if(str[j]>str[j+1]){
                swap(str[j],str[j+1]);
                flag = false;
            }
        }\
        if(flag==true) break;
    }
    reverse(str.begin(),str.end());
    cout<<str;
}
