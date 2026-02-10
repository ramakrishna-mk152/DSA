/*
class Node {
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

}; */

class Solution {
  public:
    int getMiddle(Node* head) {
        // code here
        Node* temp=head;
        int cnt=0;
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
        int idx=cnt/2;
        cnt=0;
        temp=head;
        while(temp!=NULL){
            if(cnt==idx) return temp->data;
            cnt++;
            temp=temp->next;
        }
        return -1;
    }
};