class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;
        int i = 0;
        while(i < nums.size()){
            int a = nums[i];
            while(i + 1 < nums.size() && nums[i + 1] == nums[i] + 1) i++;
            int b = nums[i];
            if(a == b) res.push_back(to_string(a));
            else res.push_back(to_string(a) + "->" + to_string(b));
            i++;
        }
        return res;
    }
};