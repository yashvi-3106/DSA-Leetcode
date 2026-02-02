class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        for(int i=0; i<letters.size(); i++){
            if((int)target < (int)letters[i]){
                return letters[i];
            }
        }
        return letters[0];
    }
};

// class Solution {
// public:
//     char nextGreatestLetter(vector<char>& letters, char target) {
//         int low = 0;
//         int high =  letters.size() - 1;
//         while(low <= high){
//             int mid = (low + high) / 2;
//             if(letters[mid] <= target) {
//                 low = mid + 1;
//             }else{
//                 high = mid - 1;
//             }
//         }
//         return letters[low % letters.size()];
//     }
// };