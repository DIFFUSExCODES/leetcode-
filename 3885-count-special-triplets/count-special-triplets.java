class Solution {
    long mod=1000000007;
    public int specialTriplets(int[] nums) {
     int max=0;
        for(int i=0;i<nums.length;i++){
         max=Math.max(max,nums[i]);
     }
        int right[]=new int[max+1];
        int left[]=new int[max+1];
        for(int i=0;i<nums.length;i++){
            right[nums[i]]++;
        }
        long count =0;
        for(int i=0;i<nums.length;i++){
            right[nums[i]]--;
            int val=nums[i]*2;
            if(val<=max){
            long total=((long)right[val]*(long)left[val])%mod;
            count =( count + total) % mod;
            }
            left[nums[i]]++;
        }
        return (int)count;
    }
}