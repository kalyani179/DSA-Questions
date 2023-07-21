class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
       node* curr = head; node* prev=NULL,*next = NULL;
       int count = 0;
       while(curr!=NULL && count<k){
           next = curr->next;
           curr->next = prev;
           prev=curr; curr=next;
           count++;
       }
       if(next != NULL){
           node* restHead = reverse(next,k);
           head->next = restHead;
       }
       return prev;
    }
};