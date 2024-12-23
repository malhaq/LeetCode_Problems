class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int num = 0;
        int counter = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (counter == 0) {
                num = nums[i];
                counter++;
            } else if (num == nums[i]) {
                counter++;
            } else {
                counter--;
            }
        }
        return num;
    }
};