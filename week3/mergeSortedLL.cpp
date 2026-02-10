/*
class Node {
 public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* sortedMerge(Node* head1, Node* head2) {
        // code here
        Node* l1=head1;
        Node* l2=head2;
        Node* head3=NULL;
        Node* l=head3;
        while(l1!=NULL && l2!=NULL){
            if(l1->data<=l2->data){
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
            }
            else if(l1->data>l2->data){
                Node*temp=new Node(l2->data);
                if(head3==NULL){
                    head3=temp;
                    l=head3;
                }
                else{
                    l->next=temp;
                    l=temp;
                }
                l2=l2->next;
            }
        }
        while(l1!=NULL){
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
        }
        while(l2!=NULL){
                Node*temp=new Node(l2->data);
                if(head3==NULL){
                    head3=temp;
                    l=head3;
                }
                else{
                    l->next=temp;
                    l=temp;
                }
                l2=l2->next;
        }
        return head3;
    }
};