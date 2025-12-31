class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int planted = 0;
        for(int i = 0; i< flowerbed.size();i++){
            if(flowerbed[i] == 0){
                int left = 0;
                int right = 0;
                if(i == 0 || flowerbed[i-1] == 0){
                    left = 1;
                }
                if(i == flowerbed.size() - 1 || flowerbed[i+1] == 0){
                    right = 1;
                }
                if(left == 1 && right == 1){
                flowerbed[i] = 1;
                planted++;
            }
            }
        }
        if(planted >= n){
            return true;
        }else{
            return false;
        }
    }
};