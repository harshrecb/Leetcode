//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	    void solve(string S,int index,set<string> &ans){
	        if(index>= S.length()){
	            ans.insert(S);
	            return;
	        }
	        for(int i=index;i<S.length();i++){
	             swap(S[index],S[i]);
	             solve(S,index+1,ans);
	        }
	    }
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    set<string> ans;
		    solve(S,0,ans);
		    vector<string> out;
		    for(auto it:ans){
		        out.push_back(it);
		    }
		    
		    return out;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends