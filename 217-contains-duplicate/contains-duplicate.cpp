class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int>fathi;
        for(int i = 0; i<nums.size();i++){
            fathi.insert(nums[i]);    
        }
        return fathi.size()<nums.size();
    }
};