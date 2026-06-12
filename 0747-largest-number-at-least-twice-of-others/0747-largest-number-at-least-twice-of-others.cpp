class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n=nums.size();
        int max1=INT_MIN;
        int max2=INT_MIN;
        int idx=0;

        for(int i=0;i<n;i++)
        {
            if(nums[i]>max1)
            {
                max2=max1;
                max1=nums[i];
                idx=i;
            }
            else if(nums[i]>max2 && nums[i]!=max1)
            {
                max2=nums[i];
            }
        }
        if(max1>=2*max2)
        {
            return idx;
        }
        else 
        {
            return -1;
        }
    }
};