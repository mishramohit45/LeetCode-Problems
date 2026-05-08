class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>s1;
        unordered_map<char,char>t1;
        for(int i=0;i<s.size();i++)
        {
            char a=s[i];
            char b=t[i];
        //forward Mapping
            if(s1.count(a))
            {
                if(s1[a]!=b)
                {
                    return false;
                }
            }
        //Reverse Mapping
            if(t1.count(b))
            {
                if(t1[b]!=a)
                {
                    return false;
                }
            }
            s1[a]=b;        //mp1 = { p -> t }
            t1[b]=a;        //mp2 = { t -> p }
        }
        return  true;
    }
};