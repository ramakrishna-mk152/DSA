// User function template for C++

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
class Solution{
  public:
    Node* divide(Node* head){
        if(head==NULL || head->next==NULL)
            return head;

        Node *evenH=NULL,*evenT=NULL;
        Node *oddH=NULL,*oddT=NULL;
        Node* curr=head;

        while(curr!=NULL){
            if(curr->data%2==0){
                if(evenH==NULL){
                    evenH=curr;
                    evenT=evenH;
                }else{
                    evenT->next=curr;
                    evenT=curr;
                }
            }else{
                if(oddH==NULL){
                    oddH=curr;
                    oddT=oddH;
                }else{
                    oddT->next=curr;
                    oddT=curr;
                }
            }
            curr=curr->next;
        }

        if(evenH==NULL)
            return oddH;

        evenT->next=oddH;
        if(oddT!=NULL)
            oddT->next=NULL;

        return evenH;
    }
};