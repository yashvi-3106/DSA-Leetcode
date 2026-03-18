class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int total = 0;
        for(int i = 0; i < cardPoints.size(); i++){
            total += cardPoints[i];
        }
        int windowSize = cardPoints.size() - k, sum = 0;
        for(int i = 0; i < windowSize; i++) sum += cardPoints[i];
        int minWindow = sum;
        for(int i = windowSize; i < cardPoints.size(); i++){
            sum += cardPoints[i];
            sum -= cardPoints[i - windowSize];

            minWindow = min(minWindow, sum);
        }
        return total - minWindow;
    }
};