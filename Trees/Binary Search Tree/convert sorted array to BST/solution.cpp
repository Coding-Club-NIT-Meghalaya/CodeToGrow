class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return find(nums,0,nums.size()-1);
        
    }
    TreeNode* find(vector<int>& a,int s,int e)
    {
        if(s>e)
            return NULL;
        if(s==e)
            return new TreeNode(a[s]);
        int mid=(s+e)/2;
        TreeNode* root=new TreeNode(a[mid]);
        root->left=find(a,s,mid-1);
        root->right=find(a,mid+1,e);
        return root;
    }
};
