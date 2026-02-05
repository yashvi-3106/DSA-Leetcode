class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n = nums.size();   
        vector<int> result;
        for(int i = 0; i < n; i++){
            int idx = i + nums[i];
            idx = idx % n;
            if(idx < 0) idx += n;
            result.push_back(nums[idx]);
        }
        return result;
    }
};
