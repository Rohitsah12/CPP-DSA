#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = nullptr;
    }
};

class Singlylinkedlist
{
public:
    Node *head;
    Node *tail;
    int size;

    Singlylinkedlist()
    {
        this->head = nullptr;
        this->tail = nullptr;
        this->size = 0;
    }

    void insert(int ind, int value)
    {
        Node *node = new Node(value);
        if (ind < 0 || ind > size)
        {
            cout << "Index out of bounds" << endl;
            return;
        }

        if (size == 0)
        {
            head = node;
            tail = node;
        }
        else if (ind == 0)
        {
            node->next = head;
            head = node;
        }
        else if (ind == size)
        {
            tail->next = node;
            tail = node;
        }
        else
        {
            Node *temp = head;
            for (int i = 0; i < ind - 1; i++)
            {
                temp = temp->next;
            }
            node->next = temp->next;
            temp->next = node;
        }
        size++;
    }

    void insertAtfirst(int value)
    {
        this->insert(0, value);
    }

    void insertAtEnd(int value)
    {
        this->insert(size, value);
    }

    void display()
    {
        Node *temp = head;
        while (temp)
        {
            cout << temp->val << "-->";
            temp = temp->next;
        }
        cout << "null\n";
    }

    int siz()
    {
        return this->size;
    }
    int getele(int idx)
    {
        if (idx < 0 || idx >= size)
        {
            return -1;
        }
        Node *temp = head;
        for (int i = 0; i < idx; i++)
        {
            temp = temp->next;
        }
        return temp->val;
    }

    void deleted(int ind)
    {
        if (ind < 0 || ind >=size)
        {
            cout << "Index out of bounds" << endl;
            return;
        }
        if (ind == 0)
        {
            Node *temp = head;
            head = head->next;
            delete temp;
        }
        else{
            int n=0;
            Node* curr=head;
            while(n<ind-1){
                n++;
                curr=curr->next;
            }
            if(ind==size-1){
                Node* temp=tail;
                tail=curr;
                curr->next=nullptr;
                delete temp;
            }
            else{
                Node* temp=curr->next;
                curr->next=temp->next;
                delete temp;
            }
        }
        size--;
    }
    void deleteHead(){
        this->deleted(0);
    }
    void deleteAtEnd(){
        this->deleted(this->siz()-1);
    }
};

int main()
{
    Singlylinkedlist sl;
    sl.insert(0, 1);
    sl.insert(1, 2);
    sl.insert(2, 4);
    sl.insert(2, 3);
    sl.insert(4, 5);
    sl.display();

    sl.insertAtEnd(15);
    sl.insertAtfirst(20);
    sl.display();
    cout << sl.siz() << endl;
    cout << sl.getele(4) << endl;
    cout << sl.getele(0) << endl;
    cout << sl.getele(1) << endl;
    cout << sl.getele(2) << endl;
    cout << sl.getele(3) << endl;
    cout << sl.getele(5) << endl;
    cout << sl.getele(6) << endl;
    cout << sl.getele(7) << endl;
    sl.deleted(0);
    sl.display();
    sl.deleted(1);
    sl.display();
    sl.insertAtEnd(25);
    sl.insertAtEnd(30);
    cout<<sl.siz()<<endl;
    sl.display();
    sl.deleted(5);
    sl.display();
    cout<<sl.siz()<<endl;
    sl.deleted(sl.siz()-1);
    sl.display();
    cout<<sl.siz()<<endl;
    sl.deleteHead();
    sl.display();
    cout<<sl.siz()<<endl;
    sl.deleteAtEnd();
    sl.display();
    cout<<sl.siz()<<endl;
}
