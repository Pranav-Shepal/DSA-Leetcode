class Solution {
    public int subarraySum(int[] arr, int k) {
        int n=arr.length;
        int cnt=0;

        int pre[]=new int[n];
        pre[0]=arr[0];
        for(int i=1;i<n;i++){
            pre[i]=arr[i]+pre[i-1];
        }


        HashMap<Integer,Integer> map=new HashMap<>();

        for(int i=0;i<n;i++){
            int rem=pre[i]-k;
            if(pre[i]==k)cnt++;
            if(map.containsKey(rem)){
                cnt+=map.get(rem);
            }
            map.put(pre[i], map.getOrDefault(pre[i],0)+1);
        }
        return cnt;
    }
}