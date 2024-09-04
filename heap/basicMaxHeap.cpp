#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int,vector<int>greater<int>>pqr;
    priority_queue<int>pq;//max heap
    pq.push(10);
    pq.push(2);
    pq.push(-6);
    pq.push(81);
    cout<<pq.top()<<endl;
    pq.pop();//81 is removed
    cout<<pq.top()<<endl;  
}