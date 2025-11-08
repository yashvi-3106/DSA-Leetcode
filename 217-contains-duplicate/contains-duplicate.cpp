class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            if (ans.count(nums[i]) > 0) {
                return true;
            } 
            ans.insert(nums[i]);
        }
        return false;
    }
};

// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//         unordered_set<int> numSet;

//         for (int n : nums) {
//             if (numSet.find(n) != numSet.end()) {
//                 return true;
//             }
//             numSet.insert(n);
//         }
        
//         return false;        
//     }
// };


// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//         int n = nums.size();
//         for (int i = 0; i < n - 1; i++) {
//             for (int j = i + 1; j < n; j++) {
//                 if (nums[i] == nums[j])
//                     return true;
//             }
//         }
//         return false;
//     }
// };

// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//         sort(nums.begin(), nums.end());
//         for (int i = 0; i < nums.size() - 1; i++) {
//             if (nums[i] == nums[i + 1]) {
//                 return true;
//             }
//         }
//         return false;
//     }
// };


// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//         int n = nums.size();
//         for (int i = 0; i < n - 1; i++) {
//             for (int j = i + 1; j < n; j++) {
//                 if (nums[i] == nums[j])
//                     return true;
//             }
//         }
//         return false;
//     }
// };