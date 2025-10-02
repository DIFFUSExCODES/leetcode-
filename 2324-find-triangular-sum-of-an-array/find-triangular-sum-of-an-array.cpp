class Solution {
public:
    int method(vector<int>& nums, int n){
        if (n == 1) return nums[0];  

        vector<int> newNums;
        for (int i = 0; i < n - 1; i++) {
            newNums.push_back((nums[i] + nums[i + 1]) % 10);
        }
        return method(newNums, n - 1);
    }
    int triangularSum(vector<int>& nums) {
        int n = nums.size() ;
        return method(nums , n) ;        
    }
};