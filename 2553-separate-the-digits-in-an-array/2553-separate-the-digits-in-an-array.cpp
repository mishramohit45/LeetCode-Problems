class Solution {
public:
    void solve(int num,vector<int>& res)
    {
        vector<int>temp;
        while(num!=0)
        {
            temp.push_back(num%10);
            num=num/10;
        }
        reverse(temp.begin(),temp.end());
        for(auto it:temp)
        {
            res.push_back(it);
        } 
    }
    vector<int> separateDigits(vector<int>& nums) {
        int n=nums.size();
        vector<int>res;
        for(int i=0;i<n;i++)
        {
            solve(nums[i],res);
        }
     return res;   
    }
};