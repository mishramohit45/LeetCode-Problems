class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>sfreq(26,0);
        vector<int>pfreq(26,0);
        for(int i=0;i<s1.size();i++)
        {
            pfreq[s1[i]-'a']++;
        }
        for(int i=0;i<s2.size();i++)
        {
            sfreq[s2[i]-'a']++;
            if(i>=s1.size())
            {
                sfreq[s2[i-s1.size()]-'a']--;
            }
            if(sfreq==pfreq) return true;
        }
        return false;
    }
};