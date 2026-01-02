class Solution {
public:
    int search(vector<int>& nums, int target) {
        int a = 0;
        int b = nums.size() - 1;
        while(a<=b){
            int c = (a+b)/2;
            if(nums[c] == target){
                return c;
            }else if(nums[c] < target){
                a = c + 1;
            }else{
                b = c - 1;
            }
        }
        return -1;
    }
};
