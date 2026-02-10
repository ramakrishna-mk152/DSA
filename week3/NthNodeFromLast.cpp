/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

class Solution {
  public:
    int getKthFromLast(Node* head, int k) {
        // code here
        int cnt=0;
        Node* temp=head;
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
        temp=head;
        int elt=cnt-k;
        cnt=0;
        while(temp!=NULL){
            if(cnt==elt){
                return temp->data;
            }
            else cnt++;
            temp=temp->next;
        }
        return -1;
    }
};