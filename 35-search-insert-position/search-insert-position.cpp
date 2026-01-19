class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        while(left <= right){
            int mid = left + (right - left) / 2;
            if(nums[mid] == target){
                return mid;
            }else if(target < nums[mid]){
                right = mid - 1;
            }else{
                left = mid + 1;
            }
        }
        return left;
    }
};


// class Solution {
// public:
//     int searchInsert(vector<int>& nums, int target) {
//         int low = 0;
//         int high=nums.size()-1;
//         while(low<=high){
//             int mid = low+(high-low)/2;
//             if(target<nums[mid]){
//                 high=mid-1;
//             }
//             else if(target>nums[mid]){
//                 low=mid+1;
//             }
//             else{
//                 return mid;
//             }
//         }
//         return low;
//     }
// };