class Solution {
public:
    void dfs(int row, int col, vector<vector<int>>& ans, int color, vector<vector<int>>& image, int drow[], int dcol[], int original ){
        ans[row][col] = color;
        int n = image.size();
        int m = image[0].size();

        for(int i = 0; i < 4; i++){
            int nrow = row + drow[i];
            int ncol = col + dcol[i];

            if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && ans[nrow][ncol] == original  && ans[nrow][ncol] != color){
                
                dfs(nrow,ncol,ans,color,image,drow,dcol,original);
            }
        }
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color ){
        
        int original = image[sr][sc];
        vector<vector<int>> ans = image;

        int drow[] = {-1,0,1,0};
        int dcol[] = {0,1,0,-1};

        dfs(sr,sc,ans,color,image,drow,dcol,original);
        return ans;
    }
};