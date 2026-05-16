class Solution {
public:
    int numberOfSpecialChars(string word) {
        int n=word.size();
        vector<int>lower(26,0);
        vector<int>upper(26,0);
        for(int i=0;i<n;i++)
        {
            if(isupper(word[i]))
            {
                upper[word[i]-'A']=1;
            }
            if(islower(word[i]))
            {
                lower[word[i]-'a']=1;
            }
        }

            int count=0;
            for(int i=0;i<26;i++)
            {
                if(lower[i]==1 && upper[i]==1)
                {
                    count++;
                }
            }
            return count;
    }
};