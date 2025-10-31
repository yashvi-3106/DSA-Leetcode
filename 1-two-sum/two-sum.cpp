class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> n; 

        for (int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];
            if (n.find(diff) != n.end()) {
                return {n[diff], i}; 
            }
            n[nums[i]] = i; 
        }
        return {}; 
    }
};



// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         for(int i =0 ; i < nums.size() ; i++){
//             for(int j = i+1;j<nums.size();j++){
//                 if(nums[j]==target-nums[i]){
//                     return {i,j};
//                 }
//             }
//         }
//         return {};
//     }
// };
