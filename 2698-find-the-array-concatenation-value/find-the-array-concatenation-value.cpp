class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long left = 0, right = nums.size() - 1;
        long long concat = 0;
        while(left <= right){
            if(left == right) concat += nums[left];
            else concat += stoi(to_string(nums[left]) + to_string(nums[right]));
            left++, right--;
        }
        return concat;
    }
};