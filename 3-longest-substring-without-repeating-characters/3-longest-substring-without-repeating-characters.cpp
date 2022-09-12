class Solution {
public:
    int lengthOfLongestSubstring(string str) {
        int n=str.size();
        int l=0;
        int r=0;
        set<char> s;
        int ans=0;
        for(int i=0;i<n;i++){
            char ch=str[i];
            if(s.find(ch)!=s.end()){
                while(str[l]!=ch){
                    s.erase(str[l]);
                    l++;
                }
                s.erase(ch);
                l++;
            }
            s.insert(ch);
            ans=max(ans,r-l+1);
            r++;
        }
        return ans;
    }
};