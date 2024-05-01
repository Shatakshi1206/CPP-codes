class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=1;
        int j=1;
        while(i<nums.size()){
            if(nums[i-1] == nums[i]){
                i++;
            }
            else {
                nums[j]=nums[i];
                i++;
                j++;
            }
        }
    return j;
    }
};
