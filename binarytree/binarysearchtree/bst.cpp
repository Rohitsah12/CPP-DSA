#include<bits/stdc++.h>
using namespace std;


  //T.C
    //O(logn)|o(h) (balanced tree)
    //o(n) worsst case
    //Avg. case=O(h)

    //SC => same as time complexity  
TreeNode* searchBST(TreeNode* root, int val) {
        if(!root) return NULL;
        else if(root->val==val) return root;
        else if(root->val>val) return searchBST(root->left,val);
        else return searchBST(root->right,val);
    }

  
class Node{
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data=data;
        this->left=nullptr;
        this=>right=nullptr;
    }
}
int main(){

}