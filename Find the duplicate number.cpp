   
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n= nums.size();
        for(int i=0;i<n;){
            int no = nums[i];
            if(no == i+1){
                i++;
            }
            else if(no == nums[no-1]) {
                return no;
            }
            else {
                nums[i] = nums[no-1];
                nums[no-1] = n;
            }
        }

    return 0;
    }
};
