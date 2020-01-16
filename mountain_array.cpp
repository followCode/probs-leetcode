/ * URL: https://leetcode.com/problems/peak-index-in-a-mountain-array/ */

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int ind=0;
        for(int i=0;i< A.size();i++){
            if(A[i]>A[ind])
                ind= i;
        }
        return ind;
    }
};


