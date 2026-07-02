class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {

        int n = grid.size();
        int m = grid[0].size();

        queue<pair<int,int>> q;
        int fresh = 0;

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {

                if(grid[i][j] == 2)
                    q.push({i,j});

                else if(grid[i][j] == 1)
                    fresh++;
            }
        }

        if(fresh == 0)
            return 0;

        int minutes = 0;

        int dx[] = {-1,1,0,0};
        int dy[] = {0,0,-1,1};

        while(!q.empty()) {

            int sz = q.size();
            bool rotten = false;

            for(int i = 0; i < sz; i++) {

                auto [row,col] = q.front();
                q.pop();

                for(int k = 0; k < 4; k++) {

                    int nrow = row + dx[k];
                    int ncol = col + dy[k];

                    if(nrow>=0 && nrow<n &&
                       ncol>=0 && ncol<m &&
                       grid[nrow][ncol]==1) {

                        grid[nrow][ncol] = 2;
                        fresh--;
                        q.push({nrow,ncol});
                        rotten = true;
                    }
                }
            }

            if(rotten)
                minutes++;
        }

        return (fresh == 0) ? minutes : -1;
    }
};