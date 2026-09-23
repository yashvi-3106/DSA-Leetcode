class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int total = 0;
        for(int i = 0; i < nums.size(); i++) total += nums[i];

        int target = total - x;
        int j = 0, sum = 0, maxLen = -1;
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];

            while(sum > target && j <= i){
                sum -= nums[j];
                j++;
            }
            if(sum == target) maxLen = max(maxLen, i - j + 1);
        }
        return maxLen == -1 ? -1 : nums.size() - maxLen;
    }
};