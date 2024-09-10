/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int m=0,n=0;
        ListNode* tmp=headA;
        while(tmp!=NULL){
            m++;tmp=tmp->next;
        }
        tmp=headB;
        while(tmp!=NULL){
            n++;tmp=tmp->next;
        }
        ListNode *tmp1=headA,*tmp2=headB;
        for(int i=0;i<(m-n);i++)
        {
            tmp1=tmp1->next;
        }
        for(int i=0;i<(n-m);i++){
            tmp2=tmp2->next;
        }
        while(tmp1!=NULL && tmp2!=NULL)
        {
            if(tmp1==tmp2) return tmp1;
            tmp1=tmp1->next;
            tmp2=tmp2->next;
        }
        return NULL;
    }
};