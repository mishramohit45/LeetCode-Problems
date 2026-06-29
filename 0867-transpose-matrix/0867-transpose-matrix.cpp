class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m=matrix.size(); //row
        int n=matrix[0].size(); //col
        vector<vector<int>>ans(n,vector<int>(m));       //int arr[m][n]   int arr[n][m]
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                ans[i][j]=matrix[j][i];
            }
        }
        return ans;
    }
};