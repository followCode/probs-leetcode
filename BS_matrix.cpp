/* URL: https://leetcode.com/problems/search-a-2d-matrix/ */

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size()==0)
            return false;
        if(matrix[0].size()==0)
            return false;
        int low=0;
        int size= matrix[0].size();
        int high= matrix.size()* size -1;
        int mid,col,row;
        while(low<=high){
            mid= (high+low)/2;
            row=mid/size;
            col= mid%size;
            
            if(matrix[row][col]==target)
                return true;
            else if(matrix[row][col]>target)
                high=mid-1;
            else
                low=mid+1;
        }
        return false;
    }
};
