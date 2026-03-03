class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int i=0;
        int j=0;
        unordered_set<int>st;
        long long maxSum=0;
        long long currSum=0;
        while(j<nums.size())
        {
            //Check for duplicates Element
            while(st.count(nums[j]))
            {
                currSum-=nums[i];
                st.erase(nums[i]);
                i++;
            }

            currSum+=nums[j];
            st.insert(nums[j]);
            if(j-i+1==k)
            {
                maxSum=max(maxSum,currSum);
                currSum-=nums[i];
                st.erase(nums[i]);
                i++;
            }
            j++;
        }
        return maxSum;
    }

};