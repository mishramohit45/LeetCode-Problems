class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool monotonicInc=true;
        bool monotonicDec=true;

        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]>nums[i]) monotonicInc=false;
            else if(nums[i-1]<nums[i]) monotonicDec=false;
        }
        return monotonicInc || monotonicDec;
    }
};