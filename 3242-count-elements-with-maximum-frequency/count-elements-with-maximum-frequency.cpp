class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }
        int maxfreq =  0 ;
        for(auto x : freq){
            if(maxfreq < x.second){
                maxfreq = x.second;
            }
        }
        int count = 0 ;
        for(auto x : freq){
            if(maxfreq == x.second){
                count = count + x.second;
            }
        }
        return count;
    }
};