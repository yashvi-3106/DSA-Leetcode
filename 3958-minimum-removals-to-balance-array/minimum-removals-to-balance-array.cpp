class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int i = 0, res = 1;
        for(int j = 0; j < nums.size(); j++){
            while((long long)nums[j] > (long long)nums[i] * k){
                i++;
            }
            res = max(res, j - i + 1);
        }
        return nums.size() - res;
    }
};