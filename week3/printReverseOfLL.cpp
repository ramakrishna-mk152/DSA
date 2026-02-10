void printReverse(Node* head){
    stack<int> st;
    Node* temp=head;

    while(temp!=NULL){
        st.push(temp->data);
        temp=temp->next;
    }

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}
