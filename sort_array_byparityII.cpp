/* URL: https://leetcode.com/problems/sort-array-by-parity-ii/ */

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        int i=0,j=1;
        while(i < A.size() && j < A.size()){
            while( i < A.size() && A[i] % 2 == 0)
                i+=2;
            while(j < A.size() && A[j] % 2 != 0)
                j+=2;
            if(i < A.size() && j < A.size()){
            int temp= A[i];
            A[i]= A[j];
            A[j]= temp;    
            }
        }
        return A;
    }
};
