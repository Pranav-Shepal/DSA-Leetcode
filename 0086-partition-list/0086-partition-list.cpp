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
    ListNode* partition(ListNode* head, int x) {
        ListNode* t=head;

        ListNode* dummy1=new ListNode(-1);
        ListNode* dummy2=new ListNode(-1);
        ListNode* a=dummy1;
        ListNode* b=dummy2;

        while(t){
            if(t->val<x){
                a->next=t;
                a=a->next;
            }
            else{
                b->next=t;
                b=b->next;
            }
            t=t->next;
        
        }
        b->next=NULL;
        a->next=dummy2->next;
        ListNode* g=dummy1->next;
        return dummy1->next;
    }
};