/* URL: https://leetcode.com/problems/delete-columns-to-make-sorted/ */


class Solution {
public:
    int minDeletionSize(vector<string>& A) {
        int len= A[0].length();
        int i,j;
        int ans=0;
        for(i=0;i<len;i++){
            int temp=0;
            for(j=0;j<A.size();j++){
                if(A[j][i]<A[temp][i])
                    break;
                else
                    temp= j;
            }
            if(j!=A.size())
                ans++;
        }
        return ans;
    }
};
