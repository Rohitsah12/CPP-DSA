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
int main(){
    Node *Head,*Tail;
    Tail = Head = NULL;
    int arr[]={2,4,6,8,10};
    //insert the value at end
    for(int i=0;i<5;i++){
    //linked list is empty
    if(Head==NULL){
        Head=new Node(arr[i]);
        Tail=Head;
    }
    //linkedlist krti h
    else{
        Tail->next=new Node(arr[i]);
        Tail=Tail->next;
    }
    }
    Node *temp;
    temp=Head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    
}