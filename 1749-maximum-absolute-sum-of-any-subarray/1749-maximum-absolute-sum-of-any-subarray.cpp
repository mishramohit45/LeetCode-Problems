class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n=nums.size();
        int curr_max=0;
        int curr_min=0;

        int glob_max=0;
        int glob_min=0;

        for(int i=0;i<n;i++)
        {
            curr_max=max(nums[i],curr_max+nums[i]);
            glob_max=max(curr_max,glob_max);

            curr_min=min(nums[i],curr_min+nums[i]);
            glob_min=min(curr_min,glob_min);
        }
        return max(glob_max,abs(glob_min));
    }
};