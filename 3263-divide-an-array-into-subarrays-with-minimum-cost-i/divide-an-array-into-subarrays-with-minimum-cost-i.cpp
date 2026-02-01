class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int min = INT_MAX, secMin = INT_MAX;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] < min){
                secMin = min;
                min = nums[i];
            }else if(nums[i] < secMin){
                secMin = nums[i];
            }
        }
        return nums[0] + min + secMin;
    }
};