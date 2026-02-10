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
    bool isPalindrome(Node *head) {
        //  code here
        stack<int> st;
        Node* temp=head;
        while(temp!=NULL){
            st.push(temp->data);
            temp=temp->next;
        }
        temp=head;
        while(temp!=NULL && !st.empty()){
            if(st.top()==temp->data){
                st.pop();
                temp=temp->next;
            }
            else return false;
        }
        return true;
    }
};