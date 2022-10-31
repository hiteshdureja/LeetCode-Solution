class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) 
    {
        int m = matrix.size(), n = matrix[0].size();
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int prev = (i < 1 || j < 1)? matrix[i][j] : matrix[i - 1][j - 1]; 
                if (matrix[i][j] != prev) 
                    return false;
            }
        }
        return true;  
    }
};