class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i = 0, j = 0;
        int zeroCount = 0, maxLen = 0;
        while(j < nums.size()){
            if(nums[j] == 0) zeroCount++;
            while(zeroCount > 1){
                if(nums[i] == 0) zeroCount--;
                i++;
            }
            maxLen = max(maxLen, j - i);
            j++;
        }
        return maxLen;
    }
};