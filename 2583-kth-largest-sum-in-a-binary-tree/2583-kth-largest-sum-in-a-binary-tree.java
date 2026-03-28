/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public long kthLargestLevelSum(TreeNode root, int k) {
        Queue<TreeNode> q=new ArrayDeque<>();

        int depth=0;
        q.add(root);
        PriorityQueue<Long> minHeap=new PriorityQueue<>();

        while(q.size()>0){
            int size=q.size();
            long sum=0;
            for(int i=0;i<size;i++){
                TreeNode r=q.remove();
                sum+=r.val;

                if(r.left!=null) q.add(r.left);
                if(r.right!=null) q.add(r.right);
            }
            depth++;
            minHeap.add(sum);
            if(minHeap.size()>k)minHeap.poll();
        }

        if(depth<k)return -1;
        long ans=(long)minHeap.poll();
        return ans;
    }
}