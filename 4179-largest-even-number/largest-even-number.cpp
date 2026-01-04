class Solution {
public:
    string largestEven(string s) {
        for(int i = s.length() - 1; i >= 0 ; i--){
            if(s[i] == '1'){
                s.pop_back();
            }else{
                break;
            }
        }
        return s;
    }
};