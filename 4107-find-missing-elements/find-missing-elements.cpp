class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int minVal = *min_element(nums.begin(), nums.end());
        int maxVal = *max_element(nums.begin(), nums.end());

        unordered_set<int> st;
        for (int num : nums) {
            st.insert(num);
        }

        vector<int> ans;
        for (int i = minVal; i <= maxVal; i++) {
            if (st.find(i) == st.end()) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};