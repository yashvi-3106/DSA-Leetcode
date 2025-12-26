class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()) return 0;
        int j = 1;
        for(int i = 1; i< nums.size(); i++){
            if(nums[i]!=nums[i-1]){
                nums[j] = nums[i];
            j++;
            }
        }
        return j;
    }
};


// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//     int i=0;
//     for(int j =0 ; j<nums.size();j++){
//         if(nums[i]!=nums[j]){
//             i++;
//             nums[i] = nums[j]; 
//         }
//     }
//     return i+1;
//     }
// };