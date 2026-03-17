// class Solution {
// public:
//     double findMaxAverage(vector<int>& nums, int k) {
//         double maxavg = INT_MIN;
//         double avg = 0;
//         double sum = 0;

//         for(int i = 0; i<k; i++){
//             sum += nums[i];
//         }
//         avg = sum / k;

//         maxavg = max(avg, maxavg);

//         for(int i = k; i< nums.size(); i++){
//             sum += nums[i];
//             sum -= nums[i-k];
//             avg = sum / k;

//             maxavg = max(avg, maxavg);
//         }

//         return maxavg;
        
//     }
// };

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0;
        
        
        for(int i = 0; i < k; i++) {
            sum += nums[i];
        }
        
        double maxSum = sum;
        
        
        for(int i = k; i < nums.size(); i++) {
            sum += nums[i] - nums[i - k];
            maxSum = max(maxSum, sum);
        }
        
        return maxSum / k;  // Divide only at the end
    }
};