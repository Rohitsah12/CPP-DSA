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
    Node *Head;
    Head=NULL;
    int arr[]={2,4,6,8,10};
    //insert node at particular position
    int x=3;//insert position
    int value=30;
    Node *temp=Head;
    x--;
    while(x--){
        temp=temp->next;
    }
    Node *temp2=new Node(value);
    temp2->next=temp->next;
    temp->next=temp2;
    
    //Print the value
    // Node *temp=Head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}