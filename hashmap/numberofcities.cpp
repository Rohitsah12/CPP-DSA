#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string, vector<int>> list;
    string city;
    int rollNo;
    int n = 10;

    for(int i = 0; i < n; i++){
        cin >> city;
        cin >> rollNo;
        list[city].push_back(rollNo); 
    }
    cout<<"-------------------------------------------------------------------\n";

    for(auto &l : list){ 
        cout << l.first << " "; 
        for(auto &roll : l.second){ 
            cout << roll << " "; 
        }
        cout << endl; 
    }

    return 0;
}