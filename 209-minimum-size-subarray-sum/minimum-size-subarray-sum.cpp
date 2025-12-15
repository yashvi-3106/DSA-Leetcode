class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int minL = INT_MAX;
        int j = 0;
        int sum = 0;
        for(int i = 0; i < nums.size() ; i++){
            sum+=nums[i];
            while(sum>=target){
                int curr = i - j + 1;
                minL = min(minL,curr);
                sum -= nums[j];
                j++;
            }
        }
        if(minL == INT_MAX) return 0;
        return minL;
    }
};


