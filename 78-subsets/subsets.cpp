class Solution {
public:
    vector<vector<int>> result;
    vector<int> subhi;
    void subset(int i, vector<int> nums) {
        if (i >= nums.size()) {
            result.push_back(subhi);
            return;
        }
        subhi.push_back(nums[i]);
        subset(i+1,nums);
        subhi.pop_back();
        subset(i+1,nums);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        subset(0,nums);
        return result;
    }
};