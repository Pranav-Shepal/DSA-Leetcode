class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        int sum=0;
        int carry=0;
        ListNode* dummy=new ListNode(-1);
        ListNode* t=dummy;

        while(l1 || l2 || carry){
            int a=l1 ? l1->val : 0;
            int b=l2 ? l2->val : 0;


            sum+=a+b+carry;
            ListNode* node=new ListNode(sum%10);
            t->next=node;
            t=t->next;
            cout<<t->val<<" ";

            carry=sum/10;
            sum=0;

            if(l1)l1=l1->next;
            if(l2)l2=l2->next;
        }
        return dummy->next;
    }
};