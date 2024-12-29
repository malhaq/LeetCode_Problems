class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int len=flowerbed.size();
        if(n==0){
            return true;
        }
        if(len ==1){
            if(flowerbed[0]==0){
                n--;
            }
            return n==0;
        }
        for (int i =0; i<len && n>0 ;i++){
            
            if(flowerbed[i] == 0){
               if(i==0){
                if(flowerbed[i+1]==0){
                    n--;
                    flowerbed[i] =1;
                }
               }else if(i == len-1){
                if(flowerbed[i-1]==0){
                    n--;
                    flowerbed[i] =1;
                }
               }else{
                if(flowerbed[i+1]==0 && flowerbed[i-1]==0){
                    n--;
                    flowerbed[i] =1;
                }
               }
            }
        }


        return n==0;
    }
};