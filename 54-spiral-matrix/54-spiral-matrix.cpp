class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        int sr=0,er=row-1,sc=0,ec=col-1;
        int count=0,total=row*col;   
        vector<int> ans;
        while(count<total){
            for(int i=sc;i<=ec;i++){
                ans.push_back(matrix[sr][i]);
                count++;
            }
            sr++;
            
            for(int i=sr;i<=er;i++){
                ans.push_back(matrix[i][ec]);
                count++;
            }
            ec--;
            if(er>=sr){
                for(int i=ec;i>=sc;i--){
                    ans.push_back(matrix[er][i]);
                    count++;
                }
                er--;
            }
            if(ec>=sc){
                for(int i=er;i>=sr;i--){
                    ans.push_back(matrix[i][sc]);
                    count++;
                }
                sc++;
            }      
        }
        return ans;
    }
};