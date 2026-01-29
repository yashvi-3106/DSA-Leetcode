class Solution {
public:
    bool partitionArray(vector<int>& nums, int k) {
        int n = nums.size();
        if(n % k != 0) return false;
        int m = n / k;
        unordered_map<int,int> mp;
        for(auto num : nums){
            mp[num]++;
        }
        for(auto it : mp){
            if(it.second > m){
                return false;
            }
        }
        return true;
    }
};