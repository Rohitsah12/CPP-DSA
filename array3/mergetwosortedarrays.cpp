#include<bits/stdc++.h>
using namespace std;
void mergetwoarray(vector<int>&a,vector<int>&b,vector<int>&c){
    int i=0;
    int j=0;
    int k=0;
    while(i<=a.size()-1 && j<=b.size()-1){
        if(a[i]<b[j]){
            c.push_back(a[i]);
            i++;
            k++;
        }
        else{
            c.push_back(b[j]);
            j++;
            k++;
        }
        if(i==a.size()){//arr1 k saaare elements utha chuke h
            while(j<=b.size()-1){
                c.push_back(b[j]);
                k++;
                j++;
            }
        }
        if(j==b.size()){//arr2 ka saare elements utha chuke h
            while(i<=a.size()-1){
                c.push_back(a[i]);
                k++;
                i++;
            }

        }
    }
}
int main(){
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(4);
    v1.push_back(5);
    v1.push_back(8);
    vector<int> v2;
    v2.push_back(2);
    v2.push_back(3);
    v2.push_back(6);
    v2.push_back(7);
    v2.push_back(10);
    v2.push_back(12);
    vector<int> v3;
    mergetwoarray(v1,v2,v3);
    for(int i=0;i<v3.size();i++){
        cout<<v3[i]<<" ";
    }
}