class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int> zeroCol, zeroRow;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    zeroCol.insert(i);
                    zeroRow.insert(j);
                }
            }
        }
        for (auto i:zeroCol){
            for(int j=0;j<matrix[0].size();j++){
                matrix[i][j]=0;
            }
        }
        for (auto i:zeroRow){
            for(int j=0;j<matrix.size();j++){
                matrix[j][i]=0;
            }
        }
    }
};