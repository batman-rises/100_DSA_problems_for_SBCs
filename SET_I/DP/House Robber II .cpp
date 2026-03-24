class Solution {
public:
    int findMaxSum(vector<int>& a) {
        // code here
        int n=a.size();
         if(n==0)return 0;
        if(n==1){
            return a[0];
        }
        vector<int> dp(n,0);
        dp[0]=a[0];
        for(int i=1;i<n;i++){
            int take=a[i];
            if(i>1){
                take+=dp[i-2];
            }
            int nottake=0+dp[i-1];
            
            dp[i]=max(take,nottake);
        }
        
        return dp[n-1];
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==0)return 0;
        if(n==1){
            return nums[0];
        }
        vector<int> temp1(nums.begin()+1,nums.end());
        vector<int> temp2(nums.begin(),nums.end()-1);
        int x=findMaxSum(temp1);
        int y=findMaxSum(temp2);
        return max(x,y);
    }
};