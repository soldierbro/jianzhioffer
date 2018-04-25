/*
�뷨1��ɾ��һ�����node�����������ҵ�node��ǰһ����㣬Ȼ��ı�ָ��ָ��ɾ��node������Ҫ�����������Ӷ�ΪO(n)
�뷨2��֪��Ҫɾ���Ľ��node�����ǰ�node����һ���������ݸ��Ƹ�node��Ȼ��ɾ��node����һ����㣬����������˵����ͬɾ��node�����Ӷ�O(1)
ע�⣺δ����node���������е�������ж�node�ڲ�����������Ҫ���������Ӷ�O(n)
�������1������ֻ��һ����㣬��ɾ�����е�һ�����
�������2��Ҫɾ���Ľ�����������һ����㣬��ʱnodeû����һ����㣬����2ʧ�ܣ�ֻ�ܱ�������ɾ�� 
*/ 
/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
void DeleteNode(ListNode** pListhead,ListNode* pToBeDelete){
	if(!pListhead||!pToBeDelete)
		return;
	if(!pToBeDelete->next){
		ListNode* pNext=pToBeDelete->next;
		pToBeDelete->val=pNext->val;
		pToBeDelete->next=pNext->next;
		delete pNext;
		pNext=NULL;
	}
	else if(*pListhead==pToBeDelete){
		delete pToBeDelete;
		pToBeDelete=NULL;
		*pListhead=NULL;
	} 
	else{
		ListNode* pNode=*pListhead;
		while(pNode->next!=pToBeDelete){
			pNode=pNode->next;
		}
		pNode->next=NULL;
		delete pToBeDelete;
		pToBeDelete=NULL;
	}
} 
