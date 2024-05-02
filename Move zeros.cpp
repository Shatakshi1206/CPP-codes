class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int nz = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                nz++;
            }
            else if(nz>0){
               int t= nums[i];
               nums[i]=0;
               nums[i-nz]=t; 
            }
        }
    }
};
