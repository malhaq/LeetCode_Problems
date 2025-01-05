class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(target<nums[0]){
            return forward(nums,target);
        }else if(target >nums[0]){
            return backward(nums,target);
        }else if(target == nums[0]){
            return 0;
        }
        return -1;
    }
    int forward(vector<int>& nums,int target){
        for(int i =0;i<nums.size();i++){
            if(target==nums[i]){
                return i;
            }
        }
        return -1;
    }
    int backward(vector<int>& nums,int target){
         for(int i =nums.size()-1;i>=0;i--){
            if(target==nums[i]){
                return i;
            }
        }
        return -1;
    }
};