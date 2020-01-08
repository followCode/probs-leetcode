/*URL: https://leetcode.com/problems/trapping-rain-water/ */

class Solution {
public:
    int trap(vector<int>& height) {
        int n= height.size();
        vector<int>checkl(n,0);
        vector<int>checkr(n,0);
        
        int water=0,temp;
        for(int i=1;i<n;i++){
            checkl[i]= max(checkl[i-1],height[i-1]);
        }
        for(int i=n-2;i>=0;i--){
            checkr[i]= max(checkr[i+1],height[i+1]);
        }
        for(int i=0;i<n;i++){
            temp= min(checkl[i],checkr[i]);
            if(temp>height[i]){
                water+=temp-height[i];
            }
        }
        return water;
    }
};
