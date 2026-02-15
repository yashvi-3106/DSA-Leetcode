class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        map<int,int> mp;
        for(auto b : bulbs) mp[b]++;
        
        vector<int> ans;
        for(auto p : mp){
            if(p.second & 1){
                ans.push_back(p.first);
            }
        }
        return ans;
    }
};