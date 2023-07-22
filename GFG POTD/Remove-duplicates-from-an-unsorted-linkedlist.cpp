/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
       unordered_map<int,int> m;
        Node* curr = head,*prev=NULL,*next=head->next;
        while(next != NULL){
            int x = curr->data;
            m[x]++;
            if(m[x]>1){
                prev->next = next;
                curr = next;
                next = curr->next;
            }
            else{
                prev = curr;
                curr = next;
                next = curr->next;
            }
        }
        m[curr->data]++;
        if(m[curr->data]>1){
            prev->next = next;
        }
        return head;
  
