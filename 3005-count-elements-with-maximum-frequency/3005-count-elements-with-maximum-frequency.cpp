class Solution {
public:

    int maxFrequencyElements(vector<int>& nums) {

        unordered_map<int,int> mp;

        int maxi = 0;
        int ans = 0;

        for(int x : nums)
        {
            mp[x]++;

            if(mp[x] > maxi)
            {
                maxi = mp[x];
                ans = maxi;
            }
            else if(mp[x] == maxi)
            {
                ans += maxi;
            }
        }

        return ans;
    }
};