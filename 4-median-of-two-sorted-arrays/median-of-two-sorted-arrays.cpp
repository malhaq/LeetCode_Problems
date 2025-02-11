class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> khalaf;
        int a =0;
        int b = 0;
        
        while (a < nums1.size() && b < nums2.size()) {
            if (nums1[a] < nums2[b]) {
                khalaf.push_back(nums1[a]);
                a++;
            } else {
                khalaf.push_back(nums2[b]);
                b++;
            }
        }
        while (a < nums1.size()) {
            khalaf.push_back(nums1[a]);
            a++;
        }
        while (b < nums2.size()) {
            khalaf.push_back(nums2[b]);
            b++;
        }
        int subhi = khalaf.size();
        if(subhi%2==1){
            return khalaf[subhi/2];
        }else{
            return (khalaf[subhi/2]+khalaf[subhi/2 -1])/2.0;
        }
    }
};