class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
      int maxCandies = 0;
        for(int candy : candies) {
            maxCandies = max(maxCandies, candy);
        }
        int n = candies.size();

        for(int i = 0; i<n; i++){
            if(candies[i] + extraCandies >= maxCandies){
                result.push_back(true);
            }else{
                 result.push_back(false);
            }
        }
        return result;
        
    }
};