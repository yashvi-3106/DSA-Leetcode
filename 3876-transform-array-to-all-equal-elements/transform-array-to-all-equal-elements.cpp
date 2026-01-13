class Solution {
public:
    bool check(vector<int> nums, int k, int target) {
        int n = nums.size();
        int ops = 0;
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] != target) {
                nums[i] *= -1;
                nums[i + 1] *= -1;
                ops++;
                if (ops > k) return false;
            }
        }
        return nums[n - 1] == target;
    }
    bool canMakeEqual(vector<int>& nums, int k) {
        return check(nums, k, 1) || check(nums, k, -1);
    }
};
