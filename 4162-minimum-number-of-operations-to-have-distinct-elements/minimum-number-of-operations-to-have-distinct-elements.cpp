class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map <int,int> mpp;
    
        reverse(nums.begin(),nums.end());
        int ans=0;
        for (int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
            if (mpp[nums[i]]>1){
                int size=nums.size()-i;
                if (size%3==0){
                    return size/3;
                }
                else {
                    return size/3 +1;
                }
            }
        }
        
        return ans;
       
    }
};

