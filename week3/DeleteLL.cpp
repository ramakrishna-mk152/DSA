void deleteList(Node* curr){
    Node* temp;
    while(curr!=NULL){
        temp=curr->next;
        delete curr;
        curr=temp;
    }
}
