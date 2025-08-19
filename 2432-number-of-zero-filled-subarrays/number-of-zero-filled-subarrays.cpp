class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long count = 0 ; 
        int streak = 0 ;
        int n = nums.size() ; 
        for (long i = 0 ; i < n ; i++){
            if(nums[i] == 0){
                streak++ ;
                count += streak ;                
            }
            else{
                streak = 0 ;
            }
        }
        return count ;
    }
};