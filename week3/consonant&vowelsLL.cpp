/*
Structure of the node of the linked list is as
struct Node
{
    char data;
    struct Node *next;

    Node(char x){
        data = x;
        next = NULL;
    }

};
*/

class Solution{
  public:
    Node* arrangeCV(Node* head){
        if(head==NULL || head->next==NULL)
            return head;

        Node *vH=NULL,*vT=NULL;
        Node *cH=NULL,*cT=NULL;
        Node* curr=head;

        while(curr!=NULL){
            char ch=curr->data;
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
               ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
                if(vH==NULL){
                    vH=curr;
                    vT=vH;
                }else{
                    vT->next=curr;
                    vT=curr;
                }
            }else{
                if(cH==NULL){
                    cH=curr;
                    cT=cH;
                }else{
                    cT->next=curr;
                    cT=curr;
                }
            }
            curr=curr->next;
        }

        if(vH==NULL)
            return cH;

        vT->next=cH;
        if(cT!=NULL)
            cT->next=NULL;

        return vH;
    }
};
