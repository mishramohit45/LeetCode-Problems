class Solution {
public:
    int digitSum(int num)
    {
        int sum=0;
        while(num!=0)
        {
            int ld=num%10;
            sum+=ld;
            num=num/10;
        }
        return sum;
    }
    int minElement(vector<int>& nums) {
        int n=nums.size();
        vector<int>temp;
        for(int i=0;i<n;i++)
        {
            temp.push_back(digitSum(nums[i]));
        }
        int ans=INT_MAX;
        for(int i=0;i<temp.size();i++)
        {
            if(temp[i]<ans)
            {
                ans=temp[i];
            }
        }
        return ans;
    }
};