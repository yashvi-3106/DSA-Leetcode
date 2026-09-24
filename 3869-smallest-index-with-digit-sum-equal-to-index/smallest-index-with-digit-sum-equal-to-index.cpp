class Solution {
public:
    int sumDigit(int num){
        int sum = 0;
        while(num > 0){
            int digit = num % 10;
            sum += digit;
            num /= 10;
        }
        return sum;
    }
    int smallestIndex(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            if(i == sumDigit(nums[i])) return i;
        }
        return -1;
    }
};