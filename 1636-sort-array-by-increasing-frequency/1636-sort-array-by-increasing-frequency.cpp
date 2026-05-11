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
    sort(r1.begin(), r1.end(), [](pair<int, int>& a, pair<int, int>& b) {
    // If frequencies are the same, sort by value descending
    if (a.first == b.first) {
        return a.second > b.second; 
    }
    return a.first < b.first; 
});
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