class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        int idx=0;
        int i=0;
        while(i<n)
        {
            char curr_ele=chars[i];
            int count=0;

        //Counting the element
            while(i<n && chars[i]==curr_ele)
            {
                count++;
                i++;
            }
        //Assigning the element
        chars[idx]=curr_ele;
        idx++;
        if(count > 1)
        {
            string count_str=to_string(count);
            for(char ch:count_str)
            {
                chars[idx]=ch;
                idx++;
            }
        }
        }
        return idx;
        
    }
};