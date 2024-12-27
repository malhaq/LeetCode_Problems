class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if (n == 0) {
            return;
        }
        if (m == 0) {
            for (int i = 0; i < n; i++) {
                nums1[m + i] = nums2[i];
            }
            return;
        }
        vector<int>temp = nums1;
        bool flag = true;
        int i =0;
        int j =0;
        int count =0;
        while (i<m&&j<n){
            if(temp[i]<=nums2[j]){
                nums1[count]=temp[i];
                count ++;
                i ++;
            }else{
                nums1[count]=nums2[j];
                count ++;
                j ++;
            }
        }
        if(j<n){
            while(j<n){
                nums1[count] = nums2[j];
                j++;
                count++;
            }
        }else{
            while(i<m){
                nums1[count] = temp[i];
                i++;
                count++;
            }
        }

    }
};