/* The structure of the Linked list Node is as follows:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

class Solution {
  public:
    Node* findIntersection(Node* head1, Node* head2) {
        // code goes here.
        Node* l1=head1;
        Node* l2=head2;
        Node* head3=NULL;
        Node* l=head3;
        while(l1!=NULL && l2!=NULL){
            if(l1->data==l2->data){
                Node*temp=new Node(l1->data);
                if(head3==NULL){
                    head3=temp;
                    l=head3;
                }
                else{
                    l->next=temp;
                    l=temp;
                }
                l1=l1->next;
                l2=l2->next;
            }
            else if(l1->data>l2->data){
                l2=l2->next;
            }
            else l1=l1->next;
        }
        return head3;
    }
};