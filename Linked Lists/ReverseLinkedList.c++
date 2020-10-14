Node* reverse(Node* head)
{
// creating three pointers to take curr,prev,Next
    Node* curr=head,*prev,*Next;
    prev=NULL;
    while(curr!=NULL)
    {
     Next=curr->next;
     curr->next=prev;
     prev=curr;
     curr=Next;
    }
    return(prev);
    
}
