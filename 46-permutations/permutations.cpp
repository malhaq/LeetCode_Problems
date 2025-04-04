class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>permutations;
        getAll(0,nums,permutations);
        return permutations;
    }

    void getAll(int i, vector<int>& nums,vector<vector<int>>&permutations){
        if(i == nums.size()){
            permutations.push_back(nums);
            return;
        }

        for(int j = i;j<nums.size();j++){
            swap(nums[i],nums[j]);
            getAll(i+1,nums,permutations);
            swap(nums[i],nums[j]);
        }
    }
};