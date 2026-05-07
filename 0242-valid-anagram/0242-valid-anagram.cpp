class Solution {
public:
    bool isAnagram(string s, string t) {
        //Anagram means same number of character in both string
        if(s.size()!=t.size()) return false;
        vector<int>sfreq(26,0);
        vector<int>tfreq(26,0);
        for(int i=0;i<s.size();i++)
        {
            sfreq[s[i]-'a']++;
            tfreq[t[i]-'a']++;
        }
        return sfreq==tfreq;       
    }
};