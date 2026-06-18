class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int>arr;
        int min=INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(nums[i]<0)
            {
                nums[i]=nums[i]*nums[i];
            }
            else
            {
                nums[i]=nums[i]*nums[i];
            }
        }
        sort(nums.begin(),nums.end());
        return nums;
    }
};