class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int index=-1;
        int len = arr.size();
        int peak = arr[0];
        for(int i =0; i<len;i++){
            if(peak<arr[i]){
                peak = arr[i];
                index =i;
            }else if(peak>arr[i]){
                return index;
            }
        }

        return index;
    }
};