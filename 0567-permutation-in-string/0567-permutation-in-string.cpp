class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s2.size();
        int k=s1.size();

        vector<int>sfreq(26,0);
        vector<int>pfreq(26,0);

        for(int i=0;i<k;i++)
        {
            pfreq[s1[i]-'a']++;
        }
        for(int i=0;i<n;i++)
        {
            sfreq[s2[i]-'a']++;
            if(i>=k) sfreq[s2[i-k]-'a']--;
            if(pfreq==sfreq)
            {
                return true;
            }
        }
        return false;
    }
};