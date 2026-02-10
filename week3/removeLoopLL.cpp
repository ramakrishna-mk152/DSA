/*
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    void removeLoop(Node* head) {
        // code here
        set<Node*> hash;
        Node* temp=head;
        Node* prev=NULL;
        while(temp!=NULL){
            if(hash.count(temp)==0){
                hash.insert(temp);
                prev=temp;
            }
            else{
                prev->next=NULL;
                break;
            } 
            temp=temp->next;
        }
        return;
    }
};