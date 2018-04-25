/*
想法1：删除一个结点node，遍历链表找到node的前一个结点，然后改变指针指向，删除node，由于要遍历链表，复杂度为O(n)
想法2：知道要删除的结点node，我们把node的下一个结点的内容复制给node，然后删除node的下一个结点，对于链表来说，等同删除node，复杂度O(1)
注意：未考虑node不在链表中的情况，判断node在不在链表中需要遍历，复杂度O(n)
特殊情况1：链表只有一个结点，即删除仅有的一个结点
特殊情况2：要删除的结点是链表最后一个结点，此时node没有下一个结点，方法2失败，只能遍历链表删除 
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
