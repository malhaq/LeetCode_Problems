class Solution {
public:
    int search(vector<int>& nums, int target) {
        int head = 0;
        int tail = nums.size() - 1;
        int mid = tail / 2;
        if (target < nums.at(head) || target > nums.at(tail)) {
            return -1;
        }
        while (head <= tail ) {
            if (nums.at(mid) == target) {
                return mid;
            }
            if (nums.at(mid) > target) {
                tail = mid-1;
            }
            else{
                head = mid+1;   
            }
            mid = getMid(head, tail);
        }
        return -1;
    }
    int getMid(int head, int tail) { return head +(tail-head) / 2; }
};