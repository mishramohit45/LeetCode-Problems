class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr_max=nums[0];
        int glob_max=nums[0];

        for(int i=1;i<nums.size();i++)
        {
            curr_max=max(nums[i],nums[i]+curr_max);
            glob_max=max(curr_max,glob_max);
        }
        return glob_max;
    }
};