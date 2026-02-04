class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int satisfiedCust = 0;
        for(int i = 0; i < customers.size(); i++){
            if(grumpy[i] == 0) satisfiedCust += customers[i];
        }
        int extra = 0, maxExtra = 0;
        for(int i = 0; i < minutes; i++){
            if(grumpy[i] == 1) extra += customers[i];
        }
        maxExtra = extra;
        for(int i = minutes; i < customers.size(); i++){
            if(grumpy[i] == 1) extra += customers[i];
            if(grumpy[i-minutes] == 1) extra -= customers[i-minutes];
            maxExtra = max(maxExtra,extra);
        }
        return satisfiedCust + maxExtra;
    }
};