/*
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
    // Function to split a linked list into two lists alternately
    vector<Node*> alternatingSplitList(struct Node* head) {
        // Your code here
        vector<Node*> res;
        Node* head1=NULL;
        Node*l1=head1;
        Node* head2=NULL;
        Node*l2=head2;
        int idx=0;
        while(head!=NULL){
            if(idx%2==0){
                if(head1==NULL){
                    head1=new Node(head->data);
                    l1=head1;
                }
                else{
                    l1->next=new Node(head->data);
                    l1=l1->next;
                }
            }
            else if(idx%2==1){
                if(head2==NULL){
                    head2=new Node(head->data);
                    l2=head2;
                }
                else{
                    l2->next=new Node(head->data);
                    l2=l2->next;
                }
                
            }
            idx++;
            head=head->next;
            
        }
        res.push_back(head1);
        res.push_back(head2);
        return res;
    }
};