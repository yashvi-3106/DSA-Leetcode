class Solution {
public:
    int strStr(string haystack, string needle) {
        int nIndex = 0;
        for(int i = 0; i < haystack.length(); i++){
            if(haystack[i] == needle[nIndex]){
                nIndex++;
            }else{
                i = i - nIndex;
                nIndex = 0;
            }
            if(nIndex == needle.length()){
                return i - needle.length() + 1;
            }
        }
        return -1;
    }
};

// class Solution {
// public:
//     int strStr(string haystack, string needle) {
//         int nIndex = 0;
//         for(int i = 0; i < haystack.length(); i++ ){
//             if(haystack[i]==needle[nIndex]){
//                 nIndex++;
//             }
//             else{
//                 i=i-nIndex;
//                 nIndex=0;
//             }
//             if(nIndex == needle.length()){
//                 return i - needle.length() + 1;
//             }
//         }
//         return -1;
//     }
// };