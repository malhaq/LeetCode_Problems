class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> res;
        res.push_back(intervals[0]);
        int size = intervals.size();
        for(int i =1; i<size;i++){
            if(intervals[i][0] <= res.back()[1]){
                res.back()[1] = max(intervals[i][1],res.back()[1]); 
            }else{
                res.push_back(intervals[i]);
            }
        }
        return res;
    }
    
};