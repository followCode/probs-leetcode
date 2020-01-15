/* URL: https://leetcode.com/problems/find-n-unique-integers-sum-up-to-zero/ */

class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> p(n,0);
        int i=0,j=n-1, z=1;
        while(i<j){
            p[i++]=-z;
            p[j--]=z;
            z++;
        }
        return p;
    }
};
