#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=nullptr;
    }
};
class Stack{
public:
    Node* head;
    int size;
    Stack(){
        this->head=nullptr;
        size=0;
    }
    void push(int val){
        Node* temp=new Node(val);
        temp->next=head;
        head=temp;
        size++;
    }
    int top(){
        return head->data;
    }
    int pop(){
        head=head->next;
        size--;
    }
    void display(){
        Node *temp=head;
        while(temp){
            if(!temp->next){
                cout<<temp->data<<"->NULL";
            }
            else{
            cout<<temp->data<<"->";
            }
            temp=temp->next;
        }
    }
    int siz(){
        return this->size;
    }

};
int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.display();
    cout<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.display();
    cout<<endl<<st.siz();
}
