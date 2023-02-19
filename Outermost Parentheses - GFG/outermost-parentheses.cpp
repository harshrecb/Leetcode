//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string removeOuter(string& s) {
        // code here
        stack<char> st;
        string ans;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                if(!st.empty()){
                    ans.push_back(s[i]);
                }
                st.push(s[i]);
            }else{
                st.pop();
                if(!st.empty()){
                    ans.push_back(s[i]);
                }
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;

        cout << obj.removeOuter(s) << "\n";
    }
}
// } Driver Code Ends