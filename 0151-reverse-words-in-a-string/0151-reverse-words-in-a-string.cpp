class Solution {
public:
    string reverseWords(string s) {
        int n=s.length();
        //Reverse the string
        reverse(s.begin(),s.end());
        int i=0;
        //main for reversing each word
        int r=0;
        int l=0;
        while(i<n)
        {
            //jb tk space ni ayegga tb tk bdhyenge i ko
        while(i<n && s[i]!=' ')
        {
            s[r]=s[i];
            r++;
            i++;
        }
        if(l<r)
        {
            reverse(s.begin()+l,s.begin()+r);
            s[r]=' ';
            r++;
            l=r;
        }
        i++;
        }
        s=s.substr(0,r-1);
        return s;
    }
};