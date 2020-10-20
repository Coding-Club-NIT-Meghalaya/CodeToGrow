class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(!root)
            return true;
       else
       return Symmertic(root->left,root->right);
        
    }
    bool Symmertic(TreeNode* p,TreeNode* q)
    {
        if(!p && !q)
            return true;
        if(!p || !q)
            return false;
            return (p->val==q->val && Symmertic(p->left,q->right) && Symmertic(p->right,q->left));
    }
}