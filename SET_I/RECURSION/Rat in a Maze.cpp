class Solution {
  public:
    void solve(int i,int j,vector<vector<int>>& maze,int n,int m,
    vector<vector<int>> &vis,string& move,vector<string> &ans,
    int di[],int dj[]){
        if(i==n-1 && j==m-1){
            ans.push_back(move);
            return;
        }
        string dir="DLRU";
        for(int ind=0;ind<4;ind++){
            int delI=i+di[ind];
            int delJ=j+dj[ind];
            if(delI<n && delJ<m && delI>=0 && delJ>=0 && !vis[delI][delJ] && maze[delI][delJ]==1){
                vis[delI][delJ]=1;
                move=move+dir[ind];
                solve(delI,delJ,maze,n,m,vis,move,ans,di,dj);
                move.pop_back();
                vis[delI][delJ]=0;
            }
        }
    }
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        // code here
        vector<string> ans;
        string move="";
        int n=maze.size();
        int m=maze[0].size();
        int di[]={1,0,0,-1};
        int dj[]={0,-1,1,0};
        vector<vector<int>> vis(n,vector<int>(m,0));
        vis[0][0]=1;
        solve(0,0,maze,n,m,vis,move,ans,di,dj);
        return ans;
    }
};