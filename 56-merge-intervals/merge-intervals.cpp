class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        // int size = intervals.size();
        if(intervals.size() == 1) return intervals;
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> res;
        res.push_back(intervals[0]);
        for(int i =1; i<intervals.size();i++){
            if(intervals[i][0] <= res.back()[1]){
                res.back()[1] = max(intervals[i][1],res.back()[1]); 
            }else{
                res.push_back(intervals[i]);
            }
        }
        return res;
    }
    
};