/*
方法1：递归交换，只要根节点存在就交换左右指针，然后判断左右指针
方法2：非递归，使用栈 
*/
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
    void Mirror(TreeNode *pRoot) {
        stack<TreeNode*> stk;
        if(!pRoot)
            return;
        stk.push(pRoot);
        while(!stk.empty()){
            TreeNode* p=stk.top();
            stk.pop();
            swap(p->left,p->right);
            if(p->left)
                stk.push(p->left);
            if(p->right)
                stk.push(p->right);
        }
    }
};
