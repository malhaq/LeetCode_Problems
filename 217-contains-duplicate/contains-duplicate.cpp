class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>fathi(nums.begin(),nums.end());
        
        return fathi.size()<nums.size();
    }
};