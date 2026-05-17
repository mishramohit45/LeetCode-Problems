class Solution {
public:
    bool halvesAreAlike(string s) {
        string f1="";
        string f2="";

        int n=s.size();
        int i=0;
        int j=n/2;

        while(i<n/2)
        {
            f1+=s[i];
            i++;
        }
        while(j<n)
        {
            f2+=s[j];
            j++;
        }
        int count1=0;
        int count2=0;

        for(int i=0;i<f1.size();i++)
        {
            if(f1[i]=='a' || f1[i]=='e' || f1[i]=='i' || f1[i]=='o' || f1[i]=='u' || f1[i]=='A' || f1[i]=='E' || f1[i]=='I' || f1[i]=='O' || f1[i]=='U')
            {
                count1++;
            }
        }
    
    for(int i=0;i<f1.size();i++)
        {
            if(f2[i]=='a' || f2[i]=='e' || f2[i]=='i' || f2[i]=='o' || f2[i]=='u'
            || f2[i]=='A' || f2[i]=='E' || f2[i]=='I' || f2[i]=='O' || f2[i]=='U')
            {
                count2++;
            }
        }
    return count1==count2;
    }
};