class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0;                
        int i = 0;               
        int j = nums.size() - 1; 
        while (i <= j) {
            if (nums[i] == 0) {
                swap(nums[low], nums[i]);
                low++;
                i++;
            } 
            else if (nums[i] == 1) {
                i++;
            } 
            else { 
                swap(nums[i], nums[j]);
                j--;
            }
        }
    }
};



// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         for (int i = 0; i < nums.size(); i++) {
//             for (int j = i + 1; j < nums.size(); j++) {
//                 if (nums[i] > nums[j]) {
//                     swap(nums[i], nums[j]);
//                 }
//             }
//         }
//     }
// };
