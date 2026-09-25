class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0; 
        priority_queue<int,vector<int>, greater<int>> pq;
        for(int num : nums) pq.push(num);
        int prev = pq.top();
        pq.pop();
        int currLen = 1, maxLen = 0;
        while(!pq.empty()){
            int curr = pq.top();
            pq.pop();
            if(prev == curr) continue;
            if(prev + 1 == curr){
                currLen++;
            }else{
                maxLen = max(maxLen,currLen);
                currLen = 1;
            }
            prev = curr;
        }
        maxLen = max(maxLen,currLen);
        return maxLen;
    }
};