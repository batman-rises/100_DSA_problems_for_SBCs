class Solution
{
public:
    bool helper(TreeNode *L, TreeNode *R)
    {
        if (L == NULL || R == NULL)
            return (L == R);
        if (L->val != R->val)
            return false;
        return helper(L->left, R->right) && helper(L->right, R->left);
    }
    bool isSymmetric(TreeNode *root)
    {
        return (root == NULL || helper(root->left, root->right));
    }
};