#include <bits/stdc++.h>
using namespace std;

int main() {
    // string s;
    // getline(cin, s);
    
    // cout << s.substr(2,2) << endl;
    string str;
    cin>>str;
    int n=str.length();
    if(n%2==0){
        cout<<str.substr(n/2);
    }

    
    return 0;
}
