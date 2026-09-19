class Solution {
public:
    class Compare {
    public:
        bool operator()(pair<string, int>& a, pair<string,int>& b) {
            if(a.second == b.second) {
                return a.first < b.first;
            }
            return a.second > b.second;
        }
    };
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> freq;
        for(string st : words) freq[st]++;

        priority_queue<pair<string,int>, vector<pair<string,int>>, Compare> pq;
        for(auto x : freq){
            pq.push({x.first,x.second});
            if(pq.size() > k) pq.pop();
        }
        vector<string> res;
        while(!pq.empty()){
            res.push_back(pq.top().first);
            pq.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};