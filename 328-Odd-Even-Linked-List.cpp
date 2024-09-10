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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL) return head;
        ListNode* tmp=head;
        ListNode* oddHead=NULL;
        ListNode* evenHead=NULL;
        ListNode* oddCur=NULL;
        ListNode* evenCur=NULL;
        int cnt=1;
        while(tmp!=NULL)
        {
            ListNode* nextNode=tmp->next;
            if(cnt%2!=0){
                if(oddHead==NULL){
                    oddHead=tmp;
                    oddCur=oddHead;
                }
                else{
                    oddCur->next=tmp;
                    oddCur=tmp;
                }
            }
            else{
                if(evenHead==NULL){
                    evenHead=tmp;
                    evenCur=evenHead;
                }
                else{
                    evenCur->next=tmp;
                    evenCur=tmp;
                }
            }
            cnt++;
            tmp=nextNode;
        }
        if(evenCur!=NULL) evenCur->next=NULL;
        if(oddCur!=NULL) oddCur->next=evenHead;
        return oddHead;
    }
};