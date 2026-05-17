class Solution {
public:
    string makeGood(string s) {
        string res="";
        for(int i=0;i<s.size();i++)
        { 
            //res.back()-32 give Captial Character
            //res.back()-32 give Smaller Character
            if(!res.empty() && (res.back()-32==s[i] || res.back()+32==s[i]))
            {
                res.pop_back();
            }
            else
            {
                res.push_back(s[i]);
            }
        }
        return res;
    }
};