class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ret = { 0 , 0 };
 
        for(int i = 0 ; i < nums.size() - 1 ; i++ ) {
            int complement = target - nums[i] ;
            for (int j = i + 1 ; j < nums.size() ; j++ ){
                if ( nums[j] == complement ){
                    ret[0] = i ;
                    ret[1] = j ;
                    break ;
                }
            }
            
        }

        return ret ;
    }
};