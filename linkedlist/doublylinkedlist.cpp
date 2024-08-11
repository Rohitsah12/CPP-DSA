#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = nullptr;
        this->prev = nullptr;
    }
};
class DoublyLinkedList
{
public:
    Node *head;
    Node *tail;
    int size;
    DoublyLinkedList()
    {
        this->head = head;
        this->tail = tail;
        this->size = 0;
    }
    void insert(int ind, int val)
    {
        Node *newNode = new Node(val);

        if (ind < 0 || ind > this->siz())
        {
            cout << "Invalid index" << endl;
            return;
        }
        if (this->size == 0)
        {
            head = newNode;
            tail = newNode;
        }
        else if (ind == 0)
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
        else if (ind == this->siz())
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
        else
        {
            Node *curr = head;
            int n = 0;
            while (n < ind - 1)
            {
                n++;
                curr = curr->next;
            }
            newNode->next = curr->next;
            newNode->prev = curr;
            if (curr->next)
            {
                curr->next->prev = newNode;
            }
            curr->next = newNode;
        }
        size++;
    }
    void insertAtTail(int val)
    {
        this->insert(this->siz(), val);
    }
    void insertAtHead(int val)
    {
        this->insert(0, val);
    }
    int siz()
    {
        return this->size;
    }
    void display()
    {
        Node *temp = head;
        while (temp)
        {
            cout << temp->val << "<-->";
            temp = temp->next;
        }
        cout<<"NUll\n";
    }
    void displayrev()
    {
        Node *temp = tail;
        while (temp)
        {
            cout << temp->val << "<-->";
            temp = temp->prev;
        }
        cout << "NUll\n";
    }
    void deleted(int idx){
        if(idx<0|| idx>=this->siz()){
            cout<<"Index out of bond\n";
            return;
        }
        if(size==1){
            head=nullptr;
            tail==nullptr;
        }
        if(idx==0){
            head=head->next;
            head->prev=nullptr;
        }
        else if(idx==this->siz()-1){
            tail=tail->prev;
            tail->next=nullptr;
        }
        else{
            Node* curr=head;
            int n=0;
            while(n<idx){
                n++;
                curr=curr->next;
            }
            Node* temp=curr->next;
            curr->prev->next=temp;
            temp->prev=curr->prev;
        }
        size--;
    }
    void deleteAtHead(){
        this->deleted(0);
    }
    void deleteAtTail(){
        this->deleted(this->siz()-1);
    }
};

int main()
{
    // Node* a=new Node(10);
    // Node* b=new Node(20);
    // Node* c=new Node(30);
    // Node* d=new Node(40);
    // Node* e=new Node(50);
    // a->next=b;
    // b->next=c;
    // c->next=d;
    // d->next=e;
    // e->prev=d;
    // d->prev=c;
    // c->prev=b;
    // b->prev=a;
    // display(a);
    DoublyLinkedList l;
    l.insertAtTail(10);
    l.insertAtTail(20);
    l.insertAtTail(30);
    l.display();
    l.insertAtTail(40);
    l.display();
    l.insert(2,25);
    l.display();
    l.displayrev();
    cout<<l.siz()<<endl;
    l.insert(4,40);
    l.insert(5,60);
    l.display();
    l.deleted(2);
    l.display();
    cout<<l.siz()<<endl;
    l.deleteAtHead();
    l.display();
    cout<<l.siz();


}