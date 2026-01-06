class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;
        int max = nums[0];
        while(low < high){
            int mid = low + (high - low) / 2;
            if(nums[mid] > nums[mid + 1]){
                high = mid;
            }else{
                low = mid + 1;
            }
        }
        return low;
    }
};


// class Solution {
// public:
//     int findPeakElement(vector<int>& nums) {
//         for(int  i = 0; i < nums.size() - 1; i++){
//             if(nums[i] > nums[i+1]){
//                 return i;
//             }
//         }
//         return nums.size() -1;
//     }
// };