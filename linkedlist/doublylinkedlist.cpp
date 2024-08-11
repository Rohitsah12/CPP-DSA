#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val) {
        this->val = val;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

class DoublyLinkedList {
public:
    Node *head;
    Node *tail;
    int size;
    
    DoublyLinkedList() {
        this->head = nullptr;
        this->tail = nullptr;
        this->size = 0;
    }
    
    void insert(int ind, int val) {
        if (ind < 0 || ind > size) {
            cout << "Invalid index" << endl;
            return;
        }
        
        Node *newNode = new Node(val);
        
        if (size == 0) { // Insert in an empty list
            head = newNode;
            tail = newNode;
        } else if (ind == 0) { // Insert at the head
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        } else if (ind == size) { // Insert at the tail
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        } else { // Insert in the middle
            Node *curr = head;
            for (int i = 0; i < ind - 1; i++) {
                curr = curr->next;
            }
            newNode->next = curr->next;
            newNode->prev = curr;
            if (curr->next) {
                curr->next->prev = newNode;
            }
            curr->next = newNode;
        }
        
        size++;
    }
    
    void insertAtTail(int val) {
        this->insert(size, val);
    }
    
    void insertAtHead(int val) {
        this->insert(0, val);
    }
    
    int siz() {
        return this->size;
    }
    
    void display() {
        Node *temp = head;
        while (temp) {
            cout << temp->val << " -> ";
            temp = temp->next;
        }
        cout << "null" << endl;
    }
    
    void displayrev() {
        Node *temp = tail;
        while (temp) {
            cout << temp->val << " -> ";
            temp = temp->prev;
        }
        cout << "null" << endl;
    }
};

int main() {
    DoublyLinkedList l;
    l.insertAtTail(10);
    l.insertAtTail(20);
    l.insertAtTail(30);
    l.display();
    l.insertAtTail(40);
    l.display();
    l.insertAtHead(5);
    l.display();
    l.insert(2, 15);
    l.display();
    l.displayrev();
    return 0;
}
