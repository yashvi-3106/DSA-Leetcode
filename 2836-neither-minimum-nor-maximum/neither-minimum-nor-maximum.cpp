class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int minNum = nums[0], maxNum = nums[0];
        for(int i = 0; i < nums.size(); i++){
            minNum = min(minNum, nums[i]);
            maxNum = max(maxNum,nums[i]);
        }
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != minNum && nums[i] != maxNum){
                return nums[i];
                break;
            }
        }
        return -1;
    }
};