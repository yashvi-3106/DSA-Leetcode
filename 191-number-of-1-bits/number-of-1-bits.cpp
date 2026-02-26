class Solution {
public:
    int hammingWeight(int n) {
        string binary = "";
        
        while(n > 0){
            binary += (n % 2) + '0';
            n /= 2;
        }
        
        int count = 0;
        for(char ch : binary){
            if(ch == '1')
                count++;
        }
        
        return count;
    }
};