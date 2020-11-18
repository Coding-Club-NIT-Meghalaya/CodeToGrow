#include<bits/stdc++.h>
using namespace std;
// creating class of node
class Node
{
    public:
    int data;
    Node* next;
    //constructor
    Node(int x)
    {
      data=x;
      next=NULL;
    }
};
void traverse(Node* head)
{
    if(head==NULL)
    return;
    cout<<head->data<<" ";
    traverse(head->next);
}
int main() {
    Node* head,*temp,*temp1;
    head=NULL;
    int n;
    // number of  nodes
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(head==NULL)
        {
            head=new Node(x);
            temp=head;
        }
        else
        {
            temp1=new Node(x);
            temp->next=temp1;
            temp=temp1;
        }
    }
    //traverse the linked list
    traverse(head);
    cout<<"\n";
	return 0;
}
