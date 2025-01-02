class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        int len = arr.size();
        vector<int>sorted (arr.begin(),arr.begin()+(len));
        sort(sorted.begin(),sorted.end());
        int peak = sorted[len-1];
        for(int index =0;index<len;index++){
            if(arr[index]== peak){
                return index;
            }
        }
        
        
        return 0;
        
    }
};