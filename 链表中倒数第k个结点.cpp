/*
�뷨1��˳����������õ�������n��������k�����Ҳ����������n-k+1����㣬�����ڶ���õ�n-k+1���
�뷨2������ָ��p1,p2ָ��ͷ��㣬p1���ƶ���������k����㣬Ȼ��p1,p2ͬʱ����ƶ���֪��p1�������һ����㣬��ʱp2��������k�����
ע�⣺��Ҫ���� k>n���������ʱҪ���NULL 
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
