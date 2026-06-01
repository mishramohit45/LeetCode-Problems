class Solution {
public:
    bool checkIfPangram(string s) {
        int n=s.size();
        set<int>st;
        for(int i=0;i<n;i++)
        {
            st.insert(s[i]);
        }
        if(st.size()==26) return true;
        else return false;
    }
};