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

void preOrdered(Node* root){
    if(!root) return;
    cout<<root->data<<" ";
    preOrdered(root->left);
    preOrdered(root->right);
}
void inOrdered(Node* root){
    if(!root) return;
    inOrdered(root->left);
    cout<<root->data<<" ";
    inOrdered(root->right);
}

void postOrderd(Node* root){
    if(!root) return;
    postOrderd(root->left);
    postOrderd(root->right);
    cout<<root->data<<" ";
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
void nthOrderdReversed(Node* root,int curr,int n){
    if(!root) return;
    if(curr==n){
        cout<<root->data<<" ";
        return ;
    }
    nthOrderdReversed(root->right,curr+1,n);
    nthOrderdReversed(root->left,curr+1,n);
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
void levelOrderedUsingQUeue(Node* root){
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        Node* temp=q.front();
        q.pop();
        cout<<temp->data<<" ";
        if(temp->left!=NULL) q.push(temp->left);
        if(temp->right!=NULL) q.push(temp->right);
    }
    cout<<endl;
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
  

    levelOrderedUsingQUeue(a);
}