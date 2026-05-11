class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        vector<pair<int,char>>res;
        for(auto it:mp)
        {
            res.push_back({it.second,it.first});
        }
        sort(res.rbegin(),res.rend());
        string ans="";
        for(auto it:res)
        {
            ans.append(it.first,it.second);
        }
        return ans;
    }
};