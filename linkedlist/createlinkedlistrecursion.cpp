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
    
    //Print the value
    Node *temp=Head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}