//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int LongestBitonicSequence(vector<int>nums)
	{
	    // code here
	    int n=nums.size();
	    vector<int> left(n,1);
	    vector<int> right(n,1);
	    for(int i=1;i<n;i++){
	        int x=1;
	        for(int j=0;j<i;j++){
	            if(nums[i]>nums[j]){
	                x=max(x,left[j]+1);
	            }
	        }
	        left[i]=x;
	    }
	    for(int i=n-2;i>=0;i--){
	        int x=1;
	        for(int j=i+1;j<n;j++){
	            if(nums[i]>nums[j]){
	                x=max(x,right[j]+1);
	            }
	        }
	        right[i]=x;
	    }
	    int ans=0;
	    for(int i=0;i<n;i++){
	       ans=max(ans,left[i]+right[i]-1); 
	    }
	    return ans;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution ob;
		int ans = ob.LongestBitonicSequence(nums);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends