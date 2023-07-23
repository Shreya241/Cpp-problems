class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int t) {
        int n=matrix.size(),m=matrix[0].size();
        int sr=0;int er=n-1;
        int row=-1;
        while(sr<=er){
            int mid=(sr+er)/2;
            if(t>=matrix[mid][0] && t<=matrix[mid][m-1]){
                row=mid;
                break;
            }
            else if(t>matrix[mid][m-1]){sr=mid+1;}
            else if(t<matrix[mid][0]){er=mid-1;}
        }
        if(row==-1) return false;
        
        int sc=0;int ec=m-1;
        while(sc<=ec){
            int mid=(sc+ec)/2;
            if(t==matrix[row][mid]){
                return true;
            }
            else if(t>matrix[row][mid]){sc=mid+1;}
            else if(t<matrix[row][mid]){ec=mid-1;}
        }
        return false;
    }
};