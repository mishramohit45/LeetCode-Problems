class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n=nums.size();
        int start=0;
        int end=n-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(nums[mid]==target)
            {
                return true;
            }
            //Tackling Duplicates Values
            if(nums[mid]==nums[start] && nums[mid]==nums[end])
            {
                start++;
                end--;
            }
            //Left Part
            else if(nums[start]<=nums[mid])
            {
                if(target>=nums[start] && target<nums[mid])
                {
                    end=mid-1;
                }
                else
                {
                    start=mid+1;
                }
            }
            //Right Part
            else if(nums[mid]<=nums[end])
            {
                if(target>nums[mid] && target<=nums[end])
                {
                    start=mid+1;
                }
                else
                {
                    end=mid-1;
                }
            }
        }
        return false;
    }
};