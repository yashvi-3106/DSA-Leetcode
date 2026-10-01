class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
       vector<int> ans;
       map<int,int> mp;
       for(int num : nums) mp[num]++;
       while(!mp.empty()){
        for(auto i = mp.begin(); i != mp.end(); i++){
            ans.push_back(i->first);
            i->second--;
        }
        for(auto i = mp.begin(); i != mp.end();){
            if(i->second == 0) i = mp.erase(i);
            else i++;
        }
       }
       return ans;
    }
};