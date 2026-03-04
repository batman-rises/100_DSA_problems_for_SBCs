class Solution
{
public:
    TreeNode *invertTree(TreeNode *root)
    {
        if (root == NULL)
            return NULL;
        TreeNode *left = invertTree(root->left);
        TreeNode *right = invertTree(root->right);
        // actual swap of tree nodes
        root->left = right;
        root->right = left;

        return root;
    }
};