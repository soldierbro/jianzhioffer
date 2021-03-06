/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/
class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        vector<int> res;
        if(!head)
            return res;
        while(head){
            res.push_back(head->val);
            head=head->next;
        }
        for(int i=0;i<=res.size()/2-1;i++){
            swap(res[i],res[res.size()-1-i]);
        }
        return res;
    }
};
