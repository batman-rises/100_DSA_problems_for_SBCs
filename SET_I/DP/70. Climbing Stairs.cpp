class Solution {
public:
            
    int climbStairs(int n) {
        if(n<=2)return n;
        return climbStairs(n-1)+climbStairs(n-2);
    }
};

class Solution {
public:
    int func(int n,vector<int> &dp){
        if(n<=2)return n;

        if(dp[n]!=-1)return dp[n];

        return dp[n]=func(n-1,dp)+func(n-2,dp);
    }
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        return func(n,dp);
        //return dp[n];
    }
};

class Solution {
public:
    
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        if(n<=2)return n;
        dp[1]=1;
        dp[2]=2;
        for(int i=3;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
};