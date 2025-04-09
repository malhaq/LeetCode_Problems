class Solution {
public:
    void sortColors(vector<int>& nums) {
        //count sort
        int count[3] = {0};
        for(int i = 0; i<nums.size();i++){
            count[nums[i]]++;
        }
        for(int i =1;i<3;i++){
            count[i] += count[i-1]; 
        }
        vector<int> temp(nums.size());
        for(int i = 0;i<nums.size();i++){
            int val = nums[i];
            temp[count[val]-1] = val;
            count[val]--;
        }
        nums=temp;
    }
    
};