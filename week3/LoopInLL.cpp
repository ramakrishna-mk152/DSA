/*
class Node {
   public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
} */

class Solution {
  public:
    bool detectLoop(Node* head) {
        // code here
        set<Node*> hash;
        Node* temp=head;
        while(temp!=NULL){
            if(hash.count(temp)==0) hash.insert(temp);
            else return true;
            temp=temp->next;
        }
        return false;
        
    }
};