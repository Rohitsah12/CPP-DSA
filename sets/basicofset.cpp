#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.erase(2);
    int target=40;
    if(s.find(target)!=s.end()){//target exist
        cout<<"Exist\n";
    }
    else cout<<"Doesnot Exist\n";
    cout<<s.size()<<endl;
    for(int ele :s){
        cout<<ele<<" ";
    }
}