class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        // Create max heap from stones
        priority_queue<int> maxHeap(stones.begin(), stones.end());
        
        // Smash stones until 0 or 1 left
        while(maxHeap.size() > 1) {
            int stone1 = maxHeap.top(); maxHeap.pop();  // Heaviest
            int stone2 = maxHeap.top(); maxHeap.pop();  // Second heaviest
            
            if(stone1 != stone2) {
                maxHeap.push(stone1 - stone2);  // Remaining weight
            }
            // If equal, both destroyed (nothing to push)
        }
        
        return maxHeap.empty() ? 0 : maxHeap.top();
    }
};