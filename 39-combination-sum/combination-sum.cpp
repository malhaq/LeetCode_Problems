class Solution {
public:
    vector<vector<int>> result;
    vector<int> subhi;
    void subset(int i, vector<int> nums, int total, int target) {
        if (i >= nums.size() || total > target) {
            return;
        }
        if (nums[i] > target) {
            return;
        }
        if (total == target) {
            result.push_back(subhi);
            return;
        }
        subhi.push_back(nums[i]);
        subset(i, nums, total + nums[i], target);
        subhi.pop_back();
        subset(i + 1, nums, total, target);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        subset(0, candidates, 0, target);

        return result;
    }
};