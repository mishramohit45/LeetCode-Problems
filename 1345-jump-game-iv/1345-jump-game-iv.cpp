class Solution {
public:
    int minJumps(vector<int>& arr) {
        int n = arr.size();
        
        if (n == 1) return 0;

        unordered_map<int, vector<int>> mp;

        for (int i = 0; i < n; i++) {
            mp[arr[i]].push_back(i);
        }

        queue<int> q;
        vector<bool> vis(n, false);

        q.push(0);
        vis[0] = true;

        int steps = 0;

        while (!q.empty()) {
            int sz = q.size();

            while (sz--) {
                int idx = q.front();
                q.pop();

                if (idx == n - 1)
                    return steps;

                vector<int> next = mp[arr[idx]];

                if (idx - 1 >= 0)
                    next.push_back(idx - 1);

                if (idx + 1 < n)
                    next.push_back(idx + 1);

                for (int ni : next) {
                    if (!vis[ni]) {
                        vis[ni] = true;
                        q.push(ni);
                    }
                }

                // Important optimization
                mp[arr[idx]].clear();
            }

            steps++;
        }

        return -1;
    }
};