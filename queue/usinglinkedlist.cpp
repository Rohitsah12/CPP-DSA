#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node(int value)
    {
        this->value = value;
        this->next = nullptr;
    }
};
class Queue
{
public:
    Node *head;
    Node *tail;
    int size;
    Queue()
    {
        size = 0;
    }
    void push(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
        {
            head = tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
        size+=1;
    }
    void pop(){
        if(size==0){
            cout<<"UNDER FLOW";
        }
        head=head->next;
        size-=1;
    }
    int top(){
        if(size==0){
            return -1;
        }
        return head->value;
    }
    int siz(){
        return this->size;
    }
    void dispaly(){
        Node* temp=head;
        while(temp){
            cout<<temp->value<<"->";
            temp=temp->next;
        }
        cout<<"NULL\n";
    }
};

int
main()
{
    Queue q;
    q.push(10);
    q.dispaly();
    q.push(1);
    q.push(2);
    q.dispaly();
    cout<<q.siz()<<endl;
    q.pop();
    q.dispaly();
}