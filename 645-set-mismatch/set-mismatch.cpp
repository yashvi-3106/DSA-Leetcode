class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_set<int> st;
        int n = nums.size();
        int duplicate = -1;
        int actualSum = 0;
        for (int x : nums) {
            actualSum += x;
            if (st.count(x)) {
                duplicate = x;
            }
            st.insert(x);
        }
        int expectedSum = n * (n + 1) / 2;
        int missing = expectedSum - (actualSum - duplicate);
        return {duplicate, missing};
    }
};


// class Solution {
// public:
//     vector<int> findErrorNums(vector<int>& nums) {
//         vector<int> freq(n + 1, 0);
//         int n = nums.size();
//         for (int x : nums) {
//             freq[x]++;
//         }
//         int duplicate = -1, missing = -1;
//         for (int i = 1; i <= n; i++) {
//             if (freq[i] == 2) duplicate = i;
//             if (freq[i] == 0) missing = i;
//         }
//         return {duplicate, missing};
//     }
// };
