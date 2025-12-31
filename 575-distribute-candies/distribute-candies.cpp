class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int candyCanEat = candyType.size() / 2;

        unordered_set<int> mp;
        for(int candies : candyType){
            mp.insert(candies);
        }

        if(mp.size() > candyCanEat){
            return candyCanEat;
        }else{
            return mp.size();
        }
    }
};