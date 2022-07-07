class Solution {
public:
void spiral(vector<vector<int>> matrix,int x,int y,int m,int n,vector<int>& ans){
if(m<=0||n<=0){
return;
}
    for(int j=y;j<n+y;j++){
        ans.push_back(matrix[x][j]);
    }
    for(int i=x+1;i<x+m;i++){
        ans.push_back(matrix[i][y+n-1]);
    }
    if(m!=1){
    for(int j=y+n-2;j>=y;j--){
        ans.push_back(matrix[x+m-1][j]);
    }
    }
    if(n!=1){
    for(int i=x+m-2;i>x;i--){
        ans.push_back(matrix[i][y]);
    }
    }
    spiral(matrix,x+1,y+1,m-2,n-2,ans);  
}
vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int m=matrix.size();
    int n=matrix[0].size();
    vector<int> ans;
    spiral(matrix,0,0,m,n,ans);
    return ans;
}
};