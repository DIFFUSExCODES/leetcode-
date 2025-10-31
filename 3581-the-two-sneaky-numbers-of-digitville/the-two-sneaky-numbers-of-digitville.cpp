class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int, int> freq;
        vector<int> sneak;
        
        for (int num : nums)
            freq[num]++;
        
        for (auto &p : freq)
            if (p.second > 1)
                sneak.push_back(p.first);
        
        return sneak;
    }
};
