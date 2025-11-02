class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> m;
        int i = 0, j = 0;
        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] < nums2[j]){
                m.push_back(nums1[i++]);
            }else{
                m.push_back(nums2[j++]);
            }
        }
        while (i < nums1.size()) m.push_back(nums1[i++]);
        while (j < nums2.size()) m.push_back(nums2[j++]);
        int total = m.size();
        if (total % 2 == 1){
            return m[total / 2];  
        }else{
            return (m[total / 2 - 1] + m[total / 2]) / 2.0;
        }
    }
};