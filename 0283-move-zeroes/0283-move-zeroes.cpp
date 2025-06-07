class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int n = nums.size();
        int slow=0;
        for(int fast =1; fast<n; fast++){
            if(nums[slow]==0 && nums[fast]!=0){
                nums[slow]=nums[fast];
                nums[fast]=0;
                slow++;
            }else if(nums[slow]!=0 && nums[fast]==0){
                slow++;
            }else if(nums[slow]!=0 && nums[fast]!=0){
                slow++;
            }
        }
        
        
    }
};