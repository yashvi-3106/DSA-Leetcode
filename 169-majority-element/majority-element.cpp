class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int i = 0;i < nums.size() ; i++){
            freq[nums[i]]++;
        }
        int n = nums.size() / 2;
        for(auto x : freq){
            if(x.second > n){
                return x.first;
            }
        }
        return 0;
    }
};