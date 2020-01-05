/* URL: https://leetcode.com/problems/valid-parentheses/submissions/  */

class Solution {
public:
    bool isValid(string s) {
        string s2;
        for(int i=0; i< s.length();i++){
           switch(s[i]){
               case '(':  s2.push_back(')');break;
               case '[':  s2.push_back(']');break;
               case '{':  s2.push_back('}');break;
               default:   if(s2[s2.length()-1]==s[i])
                               s2.pop_back();
                          else return false;
               };  
           }
        if(s2.length()==0) return true;
        return false;
    }
        
};
