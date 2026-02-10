class Solution{
  public:
    Node* reverseAltK(Node* head,int k){
        if(head==NULL || k==1)
            return head;

        Node* curr=head;
        Node* prev=NULL;
        Node* next=NULL;
        int cnt=0;

        while(curr!=NULL && cnt<k){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            cnt++;
        }

        if(head!=NULL)
            head->next=curr;

        cnt=0;
        while(curr!=NULL && cnt<k-1){
            curr=curr->next;
            cnt++;
        }

        if(curr!=NULL)
            curr->next=reverseAltK(curr->next,k);

        return prev;
    }
};
