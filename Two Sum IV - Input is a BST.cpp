class Solution {
public:
      void solve (vector<int>&in,TreeNode*root) {
        if (root==NULL)
            return ;
          solve(in,root->left);
          in.push_back(root->val);
          solve(in,root->right);
      }
    bool findTarget(TreeNode* root, int k) {
        if (root==NULL)
            return false;
        
        vector<int>in;
        solve(in,root);
        int n=in.size();
        int i=0,j=n-1;
        while(i<j)
        {
            if(in[i]+in[j]==k)
                return true;
            else if(in[i]+ in[j]<k)
                i++;
            else
                j--;
        } 
        return false;
    }
};