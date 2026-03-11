class Solution {
public:
    int bitwiseComplement(int n) {
        if(n == 0) return 1;

        string res = "";
        while(n > 0){
            res = res + char((n % 2) + '0');
            n = n / 2 ;
        }

        reverse(res.begin(),res.end());

        for(int i = 0; i < res.size(); i++){
            if(res[i] == '0') res[i] = '1';
            else res[i] = '0';
        }

        int num = stoi(res,nullptr,2);
        return num;
    }
};