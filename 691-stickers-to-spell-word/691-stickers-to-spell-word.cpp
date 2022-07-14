class Solution {
public:
    int m,n;
    int minS(vector<string>& stickers,string & target,int i,int j,vector<vector<int>> &dp)
    {  
        int v=j;
        if(j== (1<<m)-1 ){
            return 0;
        }
        
        if(i==n) return 10000;
        
        if( dp[i][j]!=-1)  return  dp[i][j];
        
        int x=minS(stickers,target,i+1,j,dp);
        
        int y=INT_MAX;
        
        bool used=0;
        for(char ch:stickers[i]){
            
            for(int k=0;k<m;k++){
                if(target[k]==ch && !((1<<k)&j) ) {
                    j=j|(1<<k);
                    used=1;
                    break;
                }
            }
            
        }
        if(used)  y=1+minS(stickers,target,i,j,dp);
        
        return  dp[i][v]=min(x,y);
    }
    int minStickers(vector<string>& stickers, string target) {
     n=stickers.size();
     m=target.size();
     vector<vector<int>>dp(n+1,vector<int>(1<<m,-1));
    
     int p= minS(stickers,target,0,0,dp);
        
 
    if(p>=10000)  return -1;
    return p;
    
    
     
    }
};