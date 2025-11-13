class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> left(n);
        vector<int> right(n);
        int leftMax = 0;
        int rightMax = 0;
        int result = 0;
        for(int i =0;i<n;i++){
            leftMax = max(leftMax,height[i]);
            left[i] = leftMax;
        }
        for(int i = n -1;i>=0;i--){
            rightMax = max(rightMax,height[i]);
            right[i] = rightMax;
        }
        for(int i = 0;i<n;i++){
            result += min(left[i],right[i]) - height[i];
        }

        return result;

    }
};