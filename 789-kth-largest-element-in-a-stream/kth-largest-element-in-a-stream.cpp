class KthLargest {
public:
    priority_queue<int,vector<int>,greater<int>> grades;
    int level;
    KthLargest(int k, vector<int>& nums) {
        level = k;
        for(int num:nums){
            grades.push(num);
        }
    }
    
    int add(int val) {
        grades.push(val);
        while(grades.size()>level){
            grades.pop();
        }
        return grades.top();

    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */