class Solution {
public:
    int maxx=-1000000000;
    int maxPathSum(TreeNode* root) {
        find(root);
       // inorder(root);
        return maxx;
    }
    int find(TreeNode* root)
    {
        if(!root)
            return 0;
       int l=find(root->left);
       int r=find(root->right);
        maxx=max(maxx,max(root->val,max(root->val+l,max(root->val+r,root->val+l+r))));
        return max(root->val,max(root->val+l,root->val+r));
    }
    void inorder(TreeNode* root)
    {
        if(!root)
            return;
        maxx=max(maxx,root->val);
        inorder(root->left);
        inorder(root->right);
    }
};