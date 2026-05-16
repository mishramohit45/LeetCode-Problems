class Solution {
public:
    void reverseDigit(int num,vector<int>&nums)
    {
        int rev=0;
        while(num!=0)
        {
            int ld=num%10;
            rev=rev*10+ld;
            num=num/10;
        }
        nums.push_back(rev);
    }
    int countDistinctIntegers(vector<int>& nums) {
       int n=nums.size();
       for(int i=0;i<n;i++)
       {
        reverseDigit(nums[i],nums);
       }
       set<int>st;
       for(int i=0;i<nums.size();i++)
       {
        st.insert(nums[i]);
       }
       return st.size();

    }
};