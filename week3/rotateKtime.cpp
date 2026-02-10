/*
class Node {
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  private:
   void rot1(Node*& head){
    if(head==NULL || head->next==NULL)
        return;

    Node* curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }

    Node* newhead=head->next;
    curr->next=head;
    head->next=NULL;
    head=newhead;
}
  public:
    Node* rotate(Node* head, int k) {
        // code here
        Node*temp=head;
        int len=0;
        int cnt=0;
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
        k=k%cnt;
        for(int i=0;i<k;i++){
            rot1(head);
        }
        return head;
        
        
    }
};