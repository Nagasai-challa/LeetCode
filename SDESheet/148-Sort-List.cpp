/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        multiset<int>ms;
        ListNode* tmp=head;
        while(tmp!=NULL){
            ms.insert(tmp->val);
            tmp=tmp->next;
        }
        tmp=head;
        for(auto it=ms.begin();it!=ms.end();it++)
        {
            tmp->val=*it;
            tmp=tmp->next;
        }
        return head;
    }
};