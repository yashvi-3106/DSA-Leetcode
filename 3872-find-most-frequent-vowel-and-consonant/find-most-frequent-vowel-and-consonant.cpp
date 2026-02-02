class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int> freq1;
        unordered_map<char,int> freq2;
        for(char ch : s){
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
                freq1[ch]++;
            }else{
                freq2[ch]++;
            }
        }
        int vow = 0, cons = 0;
        for(auto ele : freq1){
            if(ele.second > vow) vow = ele.second;
        }
        for(auto ele : freq2){
            if(ele.second > cons) cons = ele.second;
        }
        return vow + cons;
    }
};