#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;

    Node(int value){
        data=value;
        next=NULL;
    }
};
Node* Createlinkedlist(int arr[],int index,int size){
    //base case
    if(index==size) return NULL;
    Node *temp;
    temp=new Node(arr[index]);
    temp->next=Createlinkedlist(arr,index+1,size);
    return temp;
}
int main(){
    Node *Head;
    Head=NULL;
    int arr[]={2,4,6,8,10};
    Head=Createlinkedlist(arr,0,5);
    //Delete a Node at start
    // if(Head!=NULL){
    //     Node *temp=Head;
    //     Head=Head->next;
    //     delete temp;
    // }
    //Delete a node at end;
    if(Head!=NULL){
        //Only one Node is present
        if(Head->next==NULL){
            Node *temp=Head;
            delete temp;
            Head=NULL;
        }
        //More than 1 node is present
        else{
            Node *curr=Head;
            Node *prev=NULL;
            while(curr->next!=NULL){
                prev=curr;
                curr=curr->next;
            }
            prev->next=curr->next;
            delete curr;
        }
    }
    
    
    while(Head){
        cout<<Head->data<<" ";
        Head=Head->next;
    }
}