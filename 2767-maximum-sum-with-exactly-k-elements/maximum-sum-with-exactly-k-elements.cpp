class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int max = nums[n - 1];
        for (int i = 1; i < k; i++) {
            max += nums[n - 1] + i;
        }
        return max;
    }
};