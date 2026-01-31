class Solution {
public:
    int countElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int l = 0, r = nums.size() - 2;
        int count = 0;
        while(r > l){
            if(nums[nums.size() - 1] > nums[r] && nums[l] < nums[r]){
                count++;
            }
            r--;
        }
        return count;
    }
};