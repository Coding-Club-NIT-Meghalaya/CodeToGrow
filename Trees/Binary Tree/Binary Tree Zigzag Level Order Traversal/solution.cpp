class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root)
    {  
     vector<vector<int>>v;
        queue<TreeNode*>q;
        if(root)
        {
        q.push(root);
        q.push(NULL);
        }
        vector<int>v1;
        int count=0;
        while(!q.empty())
        {
          TreeNode* temp=q.front() ;
            q.pop();
            //count++;
            if(!temp)
            {
                count++;
               if(count%2==1)
                   v.push_back(v1);
                else
                {
                    for(int i=0;i<v1.size()/2;i++)
                    {
                        swap(v1[i],v1[v1.size()-1-i]);
                    }
                    v.push_back(v1);
                }
                v1.clear();
                if(!q.empty())
                    q.push(NULL);
            }
            else
            {
                v1.push_back(temp->val);
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
            }
            
        }
       return v; 
    }
};