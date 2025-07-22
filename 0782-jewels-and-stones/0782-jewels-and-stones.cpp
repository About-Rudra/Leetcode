class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> set(jewels.begin(), jewels.end());  // O(1) lookup for jewels
        int count = 0;

        for (char stone : stones) {
            if (set.count(stone)) {
                count++;
            }
        }

        return count;
    }
};
