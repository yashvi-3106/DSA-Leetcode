class Solution {
public:
    bool canAliceWin(int n) {
        if(n < 10) return false;
        int num = 10;
        int turn = 0;
        while(true){
            if(n < num){
                if(turn == 0){
                    return false;
                }else{
                    return true;
                }
            }
            n -= num;
            num--;
            if(turn == 0){
                turn = 1;
            }else{
                turn = 0;
            }
        }
    }
};

// class Solution {
// public:
//     bool canAliceWin(int n) {
//         return n >= 10;
//     }
// };