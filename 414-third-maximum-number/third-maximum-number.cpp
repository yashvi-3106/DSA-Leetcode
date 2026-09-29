class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long f = LLONG_MIN, s = LLONG_MIN, t = LLONG_MIN;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == f || nums[i] == s || nums[i] == t) continue;
            if(nums[i] > f){
                t = s;
                s = f;
                f = nums[i];
            }else if(nums[i] > s){
                t = s;
                s = nums[i];
            }else if(nums[i] > t){
                t = nums[i];
            }
        }
        if(t == LLONG_MIN) return f;
        return t;
    }
};