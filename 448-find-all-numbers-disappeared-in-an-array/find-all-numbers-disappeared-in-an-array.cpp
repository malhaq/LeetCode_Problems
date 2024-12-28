class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int len = nums.size();
        vector<int> notFound;
        for (int i = 0; i < len; i++) {
            int visited = abs(nums[i]) - 1;
            if (nums[visited] > 0) {
                nums[visited] = -nums[visited];
            }
        }
        for (int j = 0; j < len; j++) {
            if (nums[j] > 0) {
                notFound.push_back(j + 1);
            }
        }
        return notFound;
    }
};