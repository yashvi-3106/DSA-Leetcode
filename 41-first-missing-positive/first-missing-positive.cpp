class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int i = 0;
        while (i < nums.size()) {
            if (nums[i] > 0 && nums[i] <= nums.size()) {
                int corr = nums[i] - 1;   // SAFE now
                if (nums[i] != nums[corr]) {
                    swap(nums[i], nums[corr]);
                    continue;
                }
            }
            i++;
        }
        for(int i = 0; i < nums.size();i++){
            if(nums[i] != i + 1){
                return i + 1;
            }
        }
        return nums.size() + 1;
    }
};

// class Solution {
// public:
//     int firstMissingPositive(vector<int>& nums) {
//         unordered_set<int> st(nums.begin(),nums.end());
//         int i = 1;
//         while(st.count(i)){
//             i++;
//         }
//         return i;
//     }
// };