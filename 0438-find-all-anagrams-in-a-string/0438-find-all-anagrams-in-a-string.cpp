class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
     int n=s.size();
     int k=p.size();

     vector<int>pfreq(26,0);
     vector<int>sfreq(26,0);

    for(int i=0;i<k;i++)
    {
        pfreq[p[i]-'a']++;
    }   

    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        sfreq[s[i]-'a']++;
        if(i>=k)
        {
            sfreq[s[i-k]-'a']--;
        }
        if(sfreq==pfreq)
        {
            ans.push_back(i-k+1);
        }
    }
    return ans;
    }
};