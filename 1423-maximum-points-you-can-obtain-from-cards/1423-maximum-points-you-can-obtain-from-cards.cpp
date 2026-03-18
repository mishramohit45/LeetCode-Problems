class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int currentScore = 0;

        // Step 1: Sum the first k cards (all from the left)
        for (int i = 0; i < k; i++) {
            currentScore += cardPoints[i];
        }

        int maxScore = currentScore;

        // Step 2: Swap left-side cards for right-side cards one by one
        // We remove card at (k-1), then (k-2)... and add card at (n-1), (n-2)...
        for (int i = 0; i < k; i++) {
            currentScore -= cardPoints[k - 1 - i]; // Remove from left
            currentScore += cardPoints[n - 1 - i]; // Add from right
            maxScore = max(maxScore, currentScore);
        }

        return maxScore;
    }
};