
//https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards

class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        vector<int> all_front(k);
        vector<int> all_back(k);
        
        int n= cardPoints.size();
        
        all_front[0]= cardPoints[0];
        all_back[0]=cardPoints[n-1];
        
        //if I collect all from the front
        for(int i=1;i<k;i++){
            all_front[i]=cardPoints[i] +all_front[i-1];
        }
        
        //if I collect all from the back
        for(int i=1;i<k;i++){
            all_back[i]= cardPoints[n-i-1] + all_back[i-1];
        }
        
        int res= max(all_front[k-1],all_back[k-1]);
        
        // I can also have other combinations possible
        // e.g 1 from the back and rest from the front
        for(int i=0;i<k-1;i++){
            int temp= all_back[i] +all_front[k-i-2];
            if(temp>res)
                res=temp;
        }
        
        return res;
    }
};
