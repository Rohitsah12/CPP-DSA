#include<bits/stdc++.h>
using namespace std;
int fun(int x,int y){
    cout<<&x<<endl;
    cout<<&y<<endl;
}
int main(){
    int x=3;
    int y=4;
    cout<<&x<<endl;
    cout<<&y<<endl;
    fun(x,y);
}