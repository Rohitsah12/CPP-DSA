Node* deleteNode(Node *head,int x){
    if(x==1){
        Node *temp=Head;
        head=head->next;
        delete temp;
        return head;
    }
    x--;
    Node *curr=head;
    Node *prev=NULL:
    while(x--){
        prev=curr;
        curr=curr->next;
        delete curr;
        return head;
    }
    
}