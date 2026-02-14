class Solution {

    public ListNode revList(ListNode head){
        ListNode prev=null;
        ListNode next=head;
        ListNode curr=head;

        while(curr!=null){
            next=curr.next;
            curr.next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }

    public boolean isPalindrome(ListNode head) {
        
        ListNode slow=head;
        ListNode fast=head;

        while(fast.next!=null && fast.next.next!=null){
            slow=slow.next;
            fast=fast.next.next;
        }
        slow.next=revList(slow.next);
        ListNode a=head;
        ListNode b=slow.next;

        while(b!=null && a!=null){
            if(a.val!=b.val)return false;
            b=b.next;
            a=a.next;
        }

        return true;
    }
}