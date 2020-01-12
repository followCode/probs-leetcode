/* URL : https://leetcode.com/problems/largest-number/ */

class Solution {
public:
    string largestNumber(vector<int>& nums) {
        if(nums.size()==1) return to_string(nums[0]);
        sort(nums.begin(),nums.end(),[](int a, int b){ return to_string(a)+to_string(b) >= to_string(b)+to_string(a);});
        if(nums[0]==0) return 0;
        return accumulate(nums.begin(), nums.end(), string(""), [](string& s, int i){ return move(s) + to_string(i);});
    }
};
