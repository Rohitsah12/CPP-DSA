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
CreateLinkedlist(int arr[],int index,int size,Node *prev){
    //Base case
    if(index==size){
        return prev;
    }
    Node *temp;
    temp=new Node(arr[index]);
    temp->next=prev;
    return CreateLinkedlist(arr,index+1,size,temp);
}
int main(){
    Node *Head;
    Head=NULL;
    int arr[]={2,4,6,8,10};
    Head=CreateLinkedlist(arr,0,5,Head);
    //Print the value
    Node *temp=Head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}