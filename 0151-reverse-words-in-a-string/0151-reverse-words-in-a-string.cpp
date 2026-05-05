class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();

        // Step 1: reverse whole string
        reverse(s.begin(), s.end());

        int i = 0, j = 0;

        while (i < n) {
            // skip spaces
            while (i < n && s[i] == ' ') i++;

            if (i >= n) break;

            // add space before next word (not for first word)
            if (j > 0) s[j++] = ' ';

            int start = j;

            // copy word
            while (i < n && s[i] != ' ') {
                s[j++] = s[i++];
            }

            // reverse current word
            reverse(s.begin() + start, s.begin() + j);
        }

        // resize instead of substr (faster)
        s.resize(j);

        return s;
    }
};