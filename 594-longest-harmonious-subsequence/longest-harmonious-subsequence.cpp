class Solution {
public:
    int findLHS(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int res = 0, i = 0;
        for(int j = 0; j < nums.size(); j++){
            while(nums[j] - nums[i] > 1) i++;
            if(nums[j] - nums[i] == 1) res = max(res,j - i + 1);
        }
        return res;
    }
};