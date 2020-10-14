// this algorithm is based on hoe and turtle algorithm.
bool findCycle(Node* slow,Node* fast)
{
if(fast==NULL || fast->next==NULL || fast->next->next==NULL)
return false;
if(slow->next==fast->next->next)
return true;
findCycle(slow->next,fast->next->next);
}
