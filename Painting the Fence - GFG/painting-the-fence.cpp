//{ Driver Code Starts
#include <bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long solve(int n,int k,vector<long long> &dp){
        if(n==1) return k;
        if(n==2) return k*k;
        long long mod = 1000000007;
        if(dp[n]!=-1){
             return dp[n];
        }
        long long same=solve(n-2,k,dp)*(k-1);
        long long diff=solve(n-1,k,dp)*(k-1);
        return dp[n]=(same+diff)% mod;
    }
    long long countWays(int n, int k){
        // code here
        vector<long long> dp(n+1,-1);
        dp[1]=k;
        dp[2]=k*k;
        solve(n,k,dp);
        return dp[n];
    }
};

//{ Driver Code Starts.

int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		Solution ob;
		cout<<ob.countWays(n,k)<<endl;
	}
	return 0;
}
// } Driver Code Ends