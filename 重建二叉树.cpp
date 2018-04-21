/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin) {
        int n=pre.size();
        if(n==0)
            return NULL;
        TreeNode* root=new TreeNode(pre[0]);
        int gen=0;
        for(int i=0;i<n;i++){
            if(vin[i]==pre[0])
                gen=i;
        }
        vector<int> p_l,p_r,v_l,v_r;
        for(int i=0;i<gen;i++){
            p_l.push_back(pre[i+1]);
            v_l.push_back(vin[i]);
        }
        for(int i=gen+1;i<n;i++){
            p_r.push_back(pre[i]);
            v_r.push_back(vin[i]);
        }
        root->left=reConstructBinaryTree(p_l,v_l);
        root->right=reConstructBinaryTree(p_r,v_r);
        return root;
    }
};
