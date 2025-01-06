class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if (nums.size() == 0) {
            vector<int> notFound(2, -1);
            return notFound;
        }
        return firstLast(nums, target);
    }
    vector<int> firstLast(vector<int>& nums, int target) {
        vector<int> indx(2);
        int len = nums.size();
        indx[0] = first(nums, target, len);
        indx[1] = last(nums, target, len);
        return indx;
    }
    int first(vector<int>& nums, int target, int len) {
        
        if (nums[len / 2] >= target) {
            for (int i = 0; i < len / 2+1; i++) {
                if (nums[i] == target) {
                    return i;
                }
            }
            return -1;
        } else {
            for (int i = len / 2; i < len; i++) {
                if (nums[i] == target) {
                    return i;
                }
            }
            return -1;
        }
    }
    int last(vector<int>& nums, int target, int len) {
        if (nums[len / 2] > target) {
            for (int i = len / 2; i >= 0; i--) {
                if (nums[i] == target) {
                    return i;
                }
            }
            return -1;
        } else {
            for (int i = len - 1; i >= 0; i--) {
                if (nums[i] == target) {
                    return i;
                }
            }
            return -1;
        }
    }
};