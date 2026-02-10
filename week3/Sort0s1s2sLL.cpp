class Solution{
  public:
    Node* segregate(Node* head){
        int cnt0=0,cnt1=0,cnt2=0;
        Node* temp=head;

        while(temp!=NULL){
            if(temp->data==0) cnt0++;
            else if(temp->data==1) cnt1++;
            else cnt2++;
            temp=temp->next;
        }

        temp=head;
        while(cnt0--){
            temp->data=0;
            temp=temp->next;
        }
        while(cnt1--){
            temp->data=1;
            temp=temp->next;
        }
        while(cnt2--){
            temp->data=2;
            temp=temp->next;
        }

        return head;
    }
};
