class Solution {
public:
    Node* connect(Node* root) {
      queue<Node*>q;
        if(root)
        {
            q.push(root);
            q.push(NULL);
        }
        while(!q.empty())
        {
            Node* temp=q.front();
            q.pop();
            if(!temp)
            {
                if(!q.empty())
                    q.push(NULL);
            }
            else
            {
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
                temp->next=q.front();
            }
        }
        return root;
    }
    
};