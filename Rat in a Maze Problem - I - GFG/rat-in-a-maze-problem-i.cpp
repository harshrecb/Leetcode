//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    void solve(vector<vector<int>> &m, int n,int i,int j,vector<vector<int>>& visited,string move,int di[],int dj[],vector<string> &ans){
        // base case
        if(i==n-1 && j==n-1){
            ans.push_back(move);
        }
        string dir="DLRU";
        for(int ind=0;ind<4;ind++){
            int nexti=i+di[ind];
            int nextj=j+dj[ind];
            if(nexti>=0 &&nexti<n && nextj>=0 && nextj<n && visited[nexti][nextj]==0 && m[nexti][nextj]==1){
                visited[i][j]=1;
                solve(m,n,nexti,nextj,visited,move+dir[ind],di,dj,ans);
                visited[i][j]=0;
            }
        }
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string> ans;
        vector<vector<int>> visited(n,vector<int>(n,0));
         /// D L R U
         int di[]={1,0,0,-1};
         int dj[]={0,-1,1,0};
        if(m[0][0]==1){
            solve(m,n,0,0,visited,"",di,dj,ans);
        }
        return ans;
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends