/*
想法1：顺序遍历链表，得到结点个数n，倒数第k个结点也就是正数第n-k+1个结点，遍历第二遍得到n-k+1结点
想法2：两个指针p1,p2指向头结点，p1先移动到正数第k个结点，然后p1,p2同时向后移动，知道p1到达最后一个结点，此时p2即倒数第k个结点
注意：需要考虑 k>n的情况，此时要输出NULL 
*/
/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
        if(!pListHead||k==0)
            return NULL;
        ListNode* p1=pListHead;
        ListNode* p2=pListHead;
        for(int i=0;i<k-1;i++){
            if(p1->next)
                p1=p1->next;
            else
                return NULL;
        }
        while(p1->next){
            p1=p1->next;
            p2=p2->next;
        }
        return p2;
    }
};
