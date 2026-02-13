class Solution {
public:
    int getLeastFrequentDigit(int n) {
        unordered_map<int,int> freq;
        while(n > 0){
            int digit = n % 10;
            freq[digit]++;
            n /= 10;
        }
        int min_freq = INT_MAX;
        int res = 10;
        for(auto &p : freq){
            if(p.second < min_freq){
                min_freq = p.second;
                res = p.first;
            }else if (p.second == min_freq){
                res = min(res,p.first);
            }
        }
        return res;
    }
};