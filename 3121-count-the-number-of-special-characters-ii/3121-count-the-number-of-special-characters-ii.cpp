class Solution {
public:
    int numberOfSpecialChars(string word) {
        int n = word.size();
        vector<int> lastLower(26, -1);
        vector<int> firstUpper(26, -1);
        for (int i = 0; i < n; i++) {
            if (islower(word[i])) {
                lastLower[word[i] - 'a'] = i;
            }
            if (isupper(word[i])) {
                if (firstUpper[word[i] - 'A'] == -1) {
                    firstUpper[word[i] - 'A'] = i;
                }
            }
        }
        int count = 0;
        for (int i = 0; i < 26; i++) {
            if (lastLower[i] != -1 && firstUpper[i] != -1 &&
                lastLower[i] < firstUpper[i]) {
                count++;
            }
        }
        return count;
    }
};