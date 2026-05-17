class Solution {
public:
    bool isVowel(char ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
               ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U';
    }

    bool halvesAreAlike(string s) {

        int count1 = 0;
        int count2 = 0;

        int n = s.size();

        for (int i = 0; i < n / 2; i++) {
            if (isVowel(s[i])) {
                count1++;
            }

            if (isVowel(s[i + n / 2])) {
                count2++;
            }
        }

        return count1 == count2;
    }
};