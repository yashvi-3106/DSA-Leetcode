class Solution {
public:
    string winningPlayer(int x, int y) {
        int count = 0;
        while(x > 0 && y > 3){
            x -= 1;
            y -= 4;
            count++;
        }
        return count % 2 ? "Alice" : "Bob";
    }
};