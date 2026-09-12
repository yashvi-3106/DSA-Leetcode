class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum = 0; 
        int len = nums.size() + 1;
        int i = 0;
        for(int j = 0; j < nums.size(); j++){
            sum += nums[j];
            while(sum >= target){
                len = min(len, j - i + 1);
                sum -= nums[i];
                i++;
            }
        }
        if(len == nums.size() + 1) return 0;
        return len;
    }
};