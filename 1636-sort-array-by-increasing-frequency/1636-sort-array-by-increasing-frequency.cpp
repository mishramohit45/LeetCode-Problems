class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        vector<pair<int,int>>r1;
        for(auto it:mp)
        {
            r1.push_back({it.second,it.first});
        }
    auto lambda = [&](pair<int, int>& p1, pair<int, int>& p2) {
            // Rule 1: If frequencies are the same, sort by value descending
            if (p1.first == p2.first) {
                return p1.second > p2.second;
            }
            // Rule 2: Otherwise, sort by frequency ascending
            return p1.first < p2.first;
        };
        
        sort(begin(r1), end(r1), lambda);
        vector<int>res;
        for(auto it:r1)
        {
            int freq=it.first;
            int val=it.second;

            while(freq--)
            {
                res.push_back(val);
            }
        }
        return res;
    }
};