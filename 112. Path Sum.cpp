class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        
        if(root == NULL)
            return false;
        if(root->val == targetSum && root->left == NULL && root->right == NULL)
            return true;
        
        bool leftside = hasPathSum(root->left,targetSum-root->val);
        bool rightside = hasPathSum(root->right,targetSum-root->val);
        
        return (leftside || rightside);
        
    }
};