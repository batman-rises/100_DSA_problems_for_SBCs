class Solution {
  public:
    void func(vector<vector<int>>& adj,int vis[],vector<int> &ans,int node){
        vis[node]=1;
        ans.push_back(node);
        for(auto it:adj[node]){
            if(!vis[it]){
                func(adj,vis,ans,it);
            }
        }
    }
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        int n=adj.size();
        int vis[n]={0};
        vector<int> ans;
        func(adj,vis,ans,0);
        return ans;
    }
};