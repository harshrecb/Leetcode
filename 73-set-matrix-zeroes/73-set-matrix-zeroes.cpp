class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        vector<int> rv(row,-1);
        vector<int> cv(col,-1);
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]==0){
                    rv[i]=0;
                    cv[j]=0;
                }
            }
        }
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(rv[i]==0 || cv[j]==0){
                    matrix[i][j]=0;
                }
            }
        }
    }
};