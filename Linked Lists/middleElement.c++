//use hoe and turtle algorithm. in which take two pointers slow(which moves one step forward) and fast(two steps forward) and trace the middle element. 
void middile(Node* slow,Node* fast)
{
    if(fast->next==NULL || fast->next->next==NULL)
    {
        cout<<slow->data<<"\n";
        return;
    }
    middile(slow->next,fast->next->next);
}
// to do funtion call---middle(head,head);
