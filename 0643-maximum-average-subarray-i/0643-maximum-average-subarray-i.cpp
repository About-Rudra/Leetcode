class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxAvg = INT_MIN;
        int sum = 0;
        double windowAvg = 0;

        for(int i=0; i<nums.size();i++){
            sum += nums[i];

            if(i>=k-1){
                windowAvg = static_cast<double>(sum)/k;
                 maxAvg = max(maxAvg, windowAvg);
                sum -= nums[i - k + 1];
            }

           
        }
        return maxAvg;
        
    }
};