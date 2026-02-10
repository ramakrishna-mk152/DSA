/*
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution{
  public:
    Node* intersectPoint(Node* head1,Node* head2){
        set<Node*> hash;
        Node* temp1=head1;
        Node* temp2=head2;

        while(temp1!=NULL){
            hash.insert(temp1);
            temp1=temp1->next;
        }

        while(temp2!=NULL){
            if(hash.count(temp2))
                return temp2;
            temp2=temp2->next;
        }
        return NULL;
    }
};