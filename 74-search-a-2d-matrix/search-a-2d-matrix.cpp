class Solution {
public:
    bool sIR(vector<vector<int>>& mat, int target , int row) {
        int n= mat[0].size();
        int st=0 , end=n-1;
        while(st<= end) {
            int mid= st + (end-st)/2 ;
            if(target ==mat[row][mid]) {
                return true;
            } else if (target >mat[row][mid]){
                st=mid+1;
            } else{
                end =mid-1;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int m = mat.size() , n= mat[0].size();
        int sR=0 , eR=m-1;
        while(sR<= eR) {
            int midRow = sR + (eR-sR)/2;
            if(target >= mat[midRow][0] && target<= mat[midRow][n-1]) {
                return sIR(mat , target , midRow);
            } else if(target >= mat[midRow][n-1]){
               sR=midRow+1;
            } else {
                eR=midRow-1;
            }
        }
        return false;
        
    }
};