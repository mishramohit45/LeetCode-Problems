class Solution {
public:
    int percentageLetter(string s, char letter) {
        int n=s.size();
        unordered_map<char,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
        }
        int count;
        for(auto it:mp)
        {
            if(it.first==letter)
            {
                count=it.second;
            }
        }
        int per=(count*100)/n;
        return per;
    }
};