class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int windowAvg = 0;
        int count =0;
        int sum = 0;

         for(int i=0; i<arr.size();i++){
            sum += arr[i];

            if(i>=k-1){
                windowAvg = static_cast<int>(sum)/k;
                 if(windowAvg >= threshold){
                    count ++;
                }
                sum -= arr[i - k + 1];
               
            }

           
        }
        return count;

        
    }
};