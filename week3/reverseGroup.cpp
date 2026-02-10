class Solution{
  public:
    Node* reverseKGroup(Node* head,int k){
        if(head==NULL)
            return NULL;

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

        if(next!=NULL)
            head->next=reverseKGroup(next,k);

        return prev;
    }
};
