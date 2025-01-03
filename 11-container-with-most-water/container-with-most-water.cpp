class Solution {
public:
    int maxArea(vector<int>& height) {
       int areaMax =0;
       int j = height.size()-1;
       int i =0;
       while(i!=j){
        int h = min(height[i],height[j]);
        int w = j-i;
        int area = w*h;
        areaMax = max(areaMax,area);
        if(height[i]<height[j]){
            i++;
        }else{
            j--;
        }
       } 
       return areaMax;
    }
};