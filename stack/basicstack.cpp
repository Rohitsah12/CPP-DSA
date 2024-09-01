#include<bits/stdc++.h>
using namespace std;

void displayRev(stack<int>& st){
    if(st.size()==0) return;
    int x=st.top();
    st.pop();
    displayRev(st);
    cout<<x<<" ";
    st.push(x);

}
void display(stack<int>& st){
    if(st.size()==0) return;
    cout<<st.top()<<" ";
    st.pop();
    display(st);
}

int main(){
    stack<int>st;
    cout<<st.size()<<endl;;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    // cout<<st.size()<<endl;
    // while(!st.empty()){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }
    display(st);
}
