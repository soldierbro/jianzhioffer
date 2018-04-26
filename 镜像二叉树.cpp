/*
����1���ݹ齻����ֻҪ���ڵ���ھͽ�������ָ�룬Ȼ���ж�����ָ��
����2���ǵݹ飬ʹ��ջ 
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
