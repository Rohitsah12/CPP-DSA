#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "raghav";
    cout<<str<<endl;
    for(int i=0;i<str.size();i++){
        if(str[i]%2==0){
            str[i]='a';
        }
    }
    cout<<str<<endl;
}