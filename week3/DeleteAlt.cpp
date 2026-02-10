/*
Structure of the node of the binary tree
struct Node
{
    int data;
    struct Node *next;

    Node(int x){
        int data = x;
        next = NULL;
    }
};
*/
// Complete this function
class Solution {
  public:
    void deleteAlt(struct Node *head) {
        // Code here
        Node* temp=head;
        Node* delkey;
        while(temp!=NULL && temp->next!=NULL){
            delkey=temp->next;
            temp->next=temp->next->next;
            delete delkey;
            temp=temp->next;
        }
    }
};