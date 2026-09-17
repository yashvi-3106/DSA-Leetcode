class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        vector<int> arr;  
        for (int i = 0; i < nums.size() - 1; i++) {
            int sum = nums[i] + nums[i + 1];
            arr.push_back(sum);
        }
        for (int i = 0; i < arr.size(); i++) {
            for (int j = i + 1; j < arr.size(); j++) {
                if (arr[i] == arr[j]) return true;  
            }
        }
        return false;  
    }
};