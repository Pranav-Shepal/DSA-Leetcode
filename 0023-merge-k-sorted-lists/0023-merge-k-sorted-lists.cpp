
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n=lists.size();
        priority_queue<int,vector<int>,greater<int>>pq;

        for(int i=0;i<n;i++){
            ListNode* temp=lists[i];

            while(temp!=NULL){
                pq.push(temp->val);
                temp=temp->next;
            }
        }

        ListNode* dummy=new ListNode(-1);
        ListNode* t=dummy;
        while(pq.size()>0){
            ListNode* node=new ListNode(pq.top());
            pq.pop();
            t->next=node;
            t=t->next;
        }

        return dummy->next;

    }
};