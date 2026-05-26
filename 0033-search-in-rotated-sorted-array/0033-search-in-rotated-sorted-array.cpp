class Solution {
public:
    int bs(vector<int>&nums,int target,int start,int end)
    {
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]>target)
            {
                end=mid-1;
            }
            else if(nums[mid]<target)
            {
                start=mid+1;
            }
        }
        return -1;
    }
    int minIndex(vector<int>&nums)
    {
        int n=nums.size();
        int start=0;
        int end=n-1;
        while(start<=end)
        {
            if(nums[start]<=nums[end])
            {
                return start;
            }
            int mid=start+(end-start)/2;
            int next=(mid+1)%n;
            int prev=(mid+n-1)%n;
            if(nums[mid]<nums[prev] && nums[mid]<nums[next])
            {
                return mid;
            }
            else if(nums[start]<=nums[mid])
            {
                start=mid+1;
            }
            else if(nums[mid]<=nums[end])
            {
                end=mid-1;
            }
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int idx=minIndex(nums);
        int a1=bs(nums,target,0,idx-1);
        int a2=bs(nums,target,idx,n-1);
         if(a1 != -1)
            return a1;

        return a2;
    }
};