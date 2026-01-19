class Solution {
public:
    int binarySearch(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return left;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res(2, -1); 

        int n = nums.size();
        if (n == 0) return res;

        int first = binarySearch(nums, target);
        if (first == n || nums[first] != target) {
            return res;        
        }

        int last = binarySearch(nums, target + 1) - 1;

        res[0] = first;
        res[1] = last;

        return res;
    }
};


// class Solution {
// public:
//     vector<int> searchRange(vector<int>& nums, int target) {
//         int first = -1, last = -1;
//         for(int i = 0; i < nums.size(); i++){
//             if(nums[i] == target){
//                 if(first == -1){
//                     first = i;
//                 }
//                 last = i;
//             }
//         }
//         return {first, last};
//     }
// };