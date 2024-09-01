#include<bits/stdc++.h>
using namespace std;
class Node{//This is a treeNode
public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data=data;
        this->left=nullptr;
        this->right=nullptr;
    }
};
int product(Node* root){
    if(!root) return 1;
    return root->data*product(root->left)*product(root->right);
}
void displayTree(Node* root){
    if(!root) return;
    cout<<root->data<<" ";
    displayTree(root->left);
    displayTree(root->right);
}
int sumTree(Node* root){
    int sum=0;
    if(!root) return 0;
    int leftSum=sumTree(root->left);
    int rightSum=sumTree(root->right);
    sum+=root->data+leftSum+rightSum;
    return sum;
} 
int size(Node* root){
    int cnt=0;
    if(!root) return 0;
    int leftSize=size(root->left);
    int rightSize=size(root->right);
    return 1+leftSize+rightSize;
}
int maximum(Node* root){
    if(!root) return INT_MIN ;
    int maxi=max(root->data,max(maximum(root->left),maximum(root->right)));
    return maxi;
}
int minimum(Node* root){
    if(!root) return INT_MAX;
    return min(root->data,min(minimum(root->left),minimum(root->right)));
}
int level(Node* root){
    if(!root) return 0;
    return 1+max(level(root->left),level(root->right));
}
int main(){
    Node* a=new Node(1);
    Node* b=new Node(2);
    Node* c=new Node(3);
    Node* d=new Node(4);
    Node* e=new Node(5);
    Node* f=new Node(6);
    Node* g=new Node(7);
   
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
  

    displayTree(a);
    cout<<endl;
    cout<<sumTree(a);
    cout<<endl;
    cout<<size(a);
    cout<<endl;
    cout<<maximum(a);
    cout<<endl;
    cout<<level(a);
    cout<<"\nHeight of Binary Tree: "<<level(a)-1;
    cout<<endl;
    cout<<product(a);
     cout<<endl;
    cout<<minimum(a);
}