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

     ListNode* reverseList(ListNode* head) {
        ListNode* Prev=NULL;
        ListNode* Next=NULL;
        ListNode* curr=head;
        while(curr){
            Next=curr->next;
            curr->next=Prev;
            Prev=curr;
            curr=Next;
        }
        return Prev;
    }
    ListNode* kthNode(ListNode* head, int k){
        k-=1;
        while(head && k>0){
            k--;
            head=head->next;
        }
        return head;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp=head;
        ListNode* PrevLast=NULL;

        while(temp!=NULL){
            ListNode* kThNode=kthNode(temp,k);
            if(kThNode==NULL){
                if(PrevLast)PrevLast->next=temp;
                break;
            }
            ListNode* nextNode=kThNode->next;
            kThNode->next=NULL;
            reverseList(temp);
            if(temp==head){
                head=kThNode;
            }
            else{
                PrevLast->next=kThNode;
            }
            PrevLast=temp;
            temp=nextNode;
        }   
        return head;
    }

};