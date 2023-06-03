class Solution {
private:
    bool check_valid(vector<vector<char>>& board,int x,int y) {
        int count=0;
        for(int i=0;i<9;i++) {
            if(board[i][y]==board[x][y]) count++;
            if(count>1) return false;
        }
        count=0;
        for(int i=0;i<9;i++) {
            if(board[x][i]==board[x][y]) count++;
            if(count>1) return false;
        }
        count=0;
        int i=x/3*3, j=y/3*3;
        char val = board[x][y];
        for(x=i;x<i+3;x++) {
            for(y=j;y<j+3;y++) {
                if(board[x][y]==val) count++;
                if(count>1) return false;
            }
        }
        return true;
    }
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++) {
            for(int j=0;j<9;j++) {
                if(board[i][j]!='.') {
                    if(check_valid(board,i,j)==false) return false;
                }
            }
        }
        return true;
    }
};