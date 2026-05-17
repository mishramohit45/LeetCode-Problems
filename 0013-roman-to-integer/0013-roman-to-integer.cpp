class Solution {
public:
    int romanToInt(string s) {
        static vector<int>val{1000,900,500,400,100,90,50,40,10,9,5,4,1};
        static vector<string>sym{"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};

        int ans=0;
        for(int i=0;i<13;i++)
        {
            while(s.substr(0,sym[i].length())==sym[i])
            {
                ans+=val[i];
                s=s.substr(sym[i].length());
            }
        }
        return ans;
    }
};