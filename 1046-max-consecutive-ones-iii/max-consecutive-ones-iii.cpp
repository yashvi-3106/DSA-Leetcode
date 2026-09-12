class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i = 0, len = 0, zeros = 0;
        for(int j = 0; j < nums.size(); j++){
            if(nums[j] == 0) zeros++;
            while(zeros > k){
                if(nums[i] == 0) zeros--;
                i++;
            }
            len = max(len, j - i + 1);
        }
        return len;
    }
};