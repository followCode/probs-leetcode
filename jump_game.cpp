/* URL: https://leetcode.com/problems/jump-game/ */

class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums[0]>=nums.size()-1)
            return true;
        else if(nums[0]==0)
            return false;
        else{
            int n= nums[0];
            while(n>0){
                vector<int> temp;
                copy(nums.begin()+n, nums.end(), back_inserter(temp)); 
                if(canJump(temp))
                    return true;
                n--;
            }
            return false;
        }
    }
};
