class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int curr = 0, maxNum = 0;
        for(int i : gain){
            curr += i;
            maxNum = max(maxNum,curr);
        }
        return maxNum;
    }
};