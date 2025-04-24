class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int maxA = 0;
        int temp;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if(grid[i][j] ==1){
                   // temp = auxiliary(grid,n,m,i,j);
                    maxA = max(maxA,auxiliary(grid,n,m,i,j));
                }
            }
        }
        return maxA;
    }
    int auxiliary(vector<vector<int>>& grid,int row,int column,int i,int j){
        if(i<0||i>=row||j<0||j>=column||grid[i][j]==0){
            return 0;
        }
        grid[i][j]=0;
        return 1+ auxiliary(grid,row,column,i-1,j)+auxiliary(grid,row,column,i+1,j)+auxiliary(grid,row,column,i,j-1)+auxiliary(grid,row,column,i,j+1);
    }
};