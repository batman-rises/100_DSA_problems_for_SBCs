class Solution {
public:
    int func(vector<vector<int>>& a,int i,int j,vector<vector<int>>& dp){
        
        if(i==0 && j==0){
            return a[i][j];
        }
        if(i<0 || j<0){
            return 1e9;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int up=a[i][j] + func(a,i-1,j,dp);
        int left=a[i][j] + func(a,i,j-1,dp);
        return dp[i][j]=min(left,up);
    }
    int minPathSum(vector<vector<int>>& a) {
        int m=a.size();
        int n=a[0].size();
        vector<vector<int>> dp(m,vector<int> (n,-1));
        return func(a,m-1,n-1,dp);
    }
};