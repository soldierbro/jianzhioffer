/*
Ҫ�Ȱ�next��������Ȼ��ı�ָ�� 
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
    ListNode* ReverseList(ListNode* pHead) {
        if(!pHead||!pHead->next)
            return pHead;
        ListNode* pre=NULL;
        while(pHead){
            ListNode* temp=pHead->next;
            pHead->next=pre;
            pre=pHead;
            pHead=temp;
        }
        return pre;
    }
};
