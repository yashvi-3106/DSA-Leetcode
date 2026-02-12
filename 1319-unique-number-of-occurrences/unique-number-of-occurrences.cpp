class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
      unordered_map<int,int> freq;
      for(auto x: arr){
          freq[x]++;
      }  
      unordered_set<int> visited;
      for(auto x: freq){
          visited.insert(x.second);
      }
      return freq.size() == visited.size();
    }
};


