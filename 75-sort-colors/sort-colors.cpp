class Solution {
public:
    void sortColors(vector<int>& nums) {
        int white = 0;
        int blue = nums.size() - 1;
        int red = 0;
        while(white <= blue){
            if(nums[white] == 0){
                swap(nums[white],nums[red]);
                red++;
                white++;
            }else if(nums[white] == 1){
                white++;
            }else{
                swap(nums[white],nums[blue]);
                blue--;
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
