class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int numOfIslands=0;
        int row = grid.size();
        int column=grid[0].size();
         cout<<"hello";
        for(int i =0;i<row;i++){
            for(int j =0;j<column;j++){
                if(grid[i][j]=='1'){
                    dfs(grid,row,column,i,j);
                    numOfIslands++;
                }
            }
        }
        return numOfIslands;
    }

    void dfs (vector<vector<char>>& grid,int row,int column,int i,int j){
        if(i<0||i>=row||j<0||j>=column||grid[i][j]=='0'){
            return;
        }
        grid[i][j]='0';
        dfs(grid,row,column,i-1,j);
        dfs(grid,row,column,i+1,j);
        dfs(grid,row,column,i,j-1);
        dfs(grid,row,column,i,j+1);
    }
};