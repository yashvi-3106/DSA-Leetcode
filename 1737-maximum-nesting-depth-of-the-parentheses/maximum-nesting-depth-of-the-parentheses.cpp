class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int maxDepth = 0;
        for (char c : s) {
            if (c == '(') {
                st.push(c);
                if (st.size() > maxDepth) {
                    maxDepth = st.size();
                }
            } 
            else if (c == ')') {
                st.pop();
            }
        }
        return maxDepth;
    }
};



// class Solution {
// public:
//     int maxDepth(string s) {
//         int count = 0;
//         int maxDepth = 0;
//         for (char c : s) {
//             if (c == '(') {
//                 count++;
//                 if (maxDepth < count) {
//                     maxDepth = count;
//                 }
//             } 
//             else if (c == ')') {
//                 count--;
//             }
//         }
//         return maxDepth;
//     }
// };
