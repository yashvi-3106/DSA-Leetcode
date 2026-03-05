class Solution {
public:
    int minOperations(string s) {
        int idx1 = 0, idx2 = 0;
        for(int i = 0; i < s.size(); i++){
            if(i % 2 == 0){
                if(s[i] != '0') idx1++;
                else idx2++;
            }else{
                if(s[i] != '1') idx1++;
                else idx2++;
            }
        }
        return min(idx1,idx2);
    }
};