/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
class Solution {
public:
    bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
    {
        bool res=false;
        if(!pRoot1||!pRoot2)
            return res;
        if(pRoot1->val==pRoot2->val){
            res=dosetree1hastree2(pRoot1,pRoot2);
        }
        if(!res)
            res=HasSubtree(pRoot1->left,pRoot2);
        if(!res)
            res=HasSubtree(pRoot1->right,pRoot2);
        return res;
    }
private:
    bool dosetree1hastree2(TreeNode* pRoot1,TreeNode* pRoot2){
        if(!pRoot2)
            return true;
        if(!pRoot1)
            return false;
        if(pRoot1->val!=pRoot2->val)
            return false;
        return dosetree1hastree2(pRoot1->left,pRoot2->left)&&dosetree1hastree2(pRoot1->right,pRoot2->right);
    }
};
