class Solution {
  public:
    int func(vector<int>& height,int i){
        if(i==0){
        
            return 0;
        }
        int left=func(height,i-1)+abs(height[i]-height[i-1]);
        int right=INT_MAX;
        if(i>1){
            right=func(height,i-2)+abs(height[i]-height[i-2]);
        }
        return min(left,right);
    }
    int minCost(vector<int>& height) {
        // Code here
        int n=height.size();
        return func(height,n-1);
    }
};

class Solution {
  public:
    int func(vector<int>& height,int i,vector<int> &dp){
        if(i==0){
        
            return 0;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        int left=func(height,i-1,dp)+abs(height[i]-height[i-1]);
        int right=INT_MAX;
        if(i>1){
            right=func(height,i-2,dp)+abs(height[i]-height[i-2]);
        }
        return dp[i]=min(left,right);
    }
    int minCost(vector<int>& height) {
        // Code here
        int n=height.size();
        vector<int> dp(n+1,-1);
        
       return func(height,n-1,dp);
    }
};