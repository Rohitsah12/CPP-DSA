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
int main(){
    // Node a ;
    // a.val=10;
    // Node b;
    // b.val=20;
    // Node c;
    // c.val=30;
    // Node d;
    // d.val=40;
    // //forming lined list
    // a.next=&b;
    // b.next=&c;
    // c.next=&d;
    // d.next=NULL;

    Node a(20);
    Node b(30);
    Node c(40);
    Node d(50);
    a.next=&b;
    b.next=&c;
    c.next=&d;
    Node* temp=&a;
    while(temp){
        cout<<temp->val<<" ";
        temp=temp->next;
    }

}