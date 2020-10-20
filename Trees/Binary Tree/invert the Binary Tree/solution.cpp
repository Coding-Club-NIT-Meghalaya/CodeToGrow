class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
         if(!root)
             return root;
        find(root);
        return root;
    }
    void find(TreeNode* root)
    {
        if(!root)
            return;
        find(root->left);
        find(root->right);
        TreeNode* temp=root->right;
        root->right=root->left;
        root->left=temp;
    }
};