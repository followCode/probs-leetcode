/* URL: https://leetcode.com/problems/base-7/ */

class Solution {
public:
    string convertToBase7(int num) {
        if(num==0)
            return "0";
        int n=abs(num);
        string ans="";
        while(n>0){
            ans=to_string(n%7)+ans;
            n=n/7;
        }
        if(num<0) ans= "-"+ans;
        return ans;
    }
};
