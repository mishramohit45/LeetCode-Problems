class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n = nums.size() - 1;
        map<int, int> mp;
        // Count frequency
        for (int x : nums) {
            mp[x]++;
        }
        // n should appear exactly twice
        if (mp[n] != 2)
            return false;
        // 1 to n-1 should appear exactly once
        for (int i = 1; i < n; i++) {
            if (mp[i] != 1)
                return false;
        }

        return true;
    }
};