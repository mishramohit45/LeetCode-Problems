class Solution {
public:

    int maxFrequencyElements(vector<int>& nums) {

        unordered_map<int,int> mp;

        // Count frequency
        for(int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
        }

        // Find maximum frequency
        int maxi = 0;

        for(auto it : mp)
        {
            maxi = max(maxi, it.second);
        }

        // Count total elements having max frequency
        int ans = 0;

        for(auto it : mp)
        {
            if(it.second == maxi)
            {
                ans += it.second;
            }
        }

        return ans;
    }
};