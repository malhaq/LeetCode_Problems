class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> fathi;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    fathi.push_back(i);
                    fathi.push_back(j);
                    return fathi;
                }
            }
        }
        return fathi;
    }
};