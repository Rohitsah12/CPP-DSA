#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=nullptr;
    }
};
class SinglyLinkedlist{
private:
    Node* head;
    Node* tail;
    int size;
    SinglyLinkedlist(){
        head=nullptr;
        tail=nullptr;

    }
};
void display(Node *head){
    Node* temp=head;
    while(temp){
        cout<<temp->val<<"-->";
        temp=temp->next;
    }
    cout<<"Null"<<endl;
}

void displayrec(Node* head){
    if(!head) return;
    cout<<head->val<<"-->";
    display(head->next);
}
int size(Node* head){
    int sz=0;
    Node* temp=head;
    while(temp){
        sz++;
        temp=temp->next;
    } 
    return sz;

}
int main(){
   Node* a=new Node(10);
   Node* b=new Node(20);
   Node* c=new Node(30);
   Node* d=new Node(40);
   Node* e=new Node(50);
   a->next=b;
   b->next=c;
   c->next=d;
   d->next=e;

   display(a);
   cout<<"Null\n";
   cout<<size(a);
}