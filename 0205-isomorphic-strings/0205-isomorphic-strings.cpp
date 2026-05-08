class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>s1;
        unordered_map<char,char>t1;
        for(int i=0;i<s.size();i++)
        {
            char a=s[i];
            char b=t[i];

            if(s1.count(a))
            {
                if(s1[a]!=b)
                {
                    return false;
                }
            }
            if(t1.count(b))
            {
                if(t1[b]!=a)
                {
                    return false;
                }
            }
            s1[a]=b;
            t1[b]=a;
        }
        return  true;
    }
};