/* URL: https://leetcode.com/problems/ransom-note/ */

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int map[256];
        memset(map,0,sizeof(map));
        for(int i=0; i< magazine.length();i++)
            map[magazine[i]]++;
        for(int i=0; i< ransomNote.length();i++)
            if(map[ransomNote[i]]==0)
                return false;
            else
                map[ransomNote[i]]--;
        return true;
    }
};
