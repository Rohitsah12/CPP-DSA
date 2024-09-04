#include<bits/stdc++.h>
using namespace std;
class Node{
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data=data;
        this->left=nullptr;
        this->right=nullptr;
    }
}
int level(Node* root){
    if(!root) return 1;
    return 1+max(level(root->left),level(root->right));
}
void nthOrderd(Node* root,int curr,int n){
    if(!root) return;
    if(curr==n){
        cout<<root->data<<" ";
        return ;
    }
    nthOrderd(root->left,curr+1,n);
    nthOrderd(root->right,curr+1,n);
}

void levelOrdered(Node* root){
    int n=level(root);
    for(int i=1;i<=n;i++){
        nthOrderd(root,1,i);
        cout<<endl;
    }
}

int main(){
    int arr[]={1,2,3,4,5,INT_MIN,6,7,INT_MIN,8,INT_MIN,8,INT_MIN,9,10,INT_MIN,11,INT_MIN,12,INT_MIN,13,INT_MIN,14,15,16,INT_MIN,17,INT_MIN,INT_MIN],18,INT_MIN,19,INT_MIN,INT_MIN,INT_MIN,20,21,22,23,INT_MIN,24,25,26,27,INT_MIN,INT_MIN,28,INT_MIN,INT_MIN}
    int n=sizeof(arr)/sizeof(arr[0]);
    Node* root=construct(arr,n);
    levelOrdered(root);
}