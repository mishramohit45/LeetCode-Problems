class Solution {
public:
    string greatestLetter(string s) {
        int n=s.size();
        vector<int>lower(26,0);
        vector<int>upper(26,0);

        for(int i=0;i<n;i++)
        {
            if(islower(s[i]))
            {
                lower[s[i]-'a']=1;
            }
            if(isupper(s[i]))
            {
                upper[s[i]-'A']=1;
            }
        }
        string res="";
        for(int i=0;i<26;i++)
        {
            if(upper[i]==1 && lower[i]==1)
            {
                res=i+'A';
            }
        }
        return res;
    }
};