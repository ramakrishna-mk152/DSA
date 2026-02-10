/*
// structure of the node is as follows

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};

*/
class Solution {
  public:
    struct Node* makeUnion(struct Node* head1, struct Node* head2) {
        // code here
        set<int> hash;
        Node*temp1=head1,*temp2=head2;
        Node*head3=NULL;
        Node*l=head3;
        while(temp1!=NULL){
            hash.insert(temp1->data);
            temp1=temp1->next;
            
        }
        while(temp2!=NULL){
            hash.insert(temp2->data);
            temp2=temp2->next;
            
        }
        for(auto it:hash){
            if(head3==NULL){
                head3=new Node(it);
                l=head3;
            }
            else{
                l->next=new Node(it);
                l=l->next;
            }
        }
        return head3;
    }
};