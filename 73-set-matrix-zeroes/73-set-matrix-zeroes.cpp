class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<pair<int,int>> matrixcopy;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==0)
                {
                    matrixcopy.push_back({i,j});
                }
            }
        }
        for(auto it: matrixcopy)
        {
            int a=it.first;
            int b=it.second;
            
            for(int i=0; i<m; i++)
            {
                matrix[i][b]=0;
            }
            
            for(int i=0; i<n; i++)
            {
                matrix[a][i]=0;
            }
        }
    }
};