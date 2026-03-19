class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
       int left = 0;
       int sum = 0;
        double avg = 0;
        int count = 0;

       for(int r  = 0; r< k; r++){
        sum += arr[r];
       }
       avg = sum / (double)k;
       if(avg >= threshold) count++;

       for(int r=k; r< arr.size(); r++){
        sum += arr[r];
        sum -= arr[r - k];

        avg = sum / (double)k;
        if(avg >= threshold) count++;

       }
    return count;
        
    }
};