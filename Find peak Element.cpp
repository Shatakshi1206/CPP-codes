class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int j=0;
        if(nums.size()==2){
            if(nums[j]> nums[j+1]){
                return j;
            }
            else {
                return j+1;
            }
        }
        else {
            for(int i=1;i<nums.size();i++){
               if(i== nums.size()-1){
                  if(nums[i]>nums[i-1]){
                    return i;
                  }
               }
               if(nums[i]>nums[i-1] && nums[i]>nums[i+1]){
                   return i;
                }
            }
        }
        
    return 0;
    }
};
