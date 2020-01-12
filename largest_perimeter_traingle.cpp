/* URL: https://leetcode.com/problems/largest-perimeter-triangle/ */

class Solution {
public:
    bool canbetriangle(int a, int b, int c){
        return ((a+b)>c && (b+c)>a && (a+c)>b);
    }
    int largestPerimeter(vector<int>& A) {
        sort(A.begin(),A.end(),greater<int>());
        int peri=0;
        for(int i=0;i<A.size()-2;i++){
            if(canbetriangle(A[i],A[i+1],A[i+2]))
               peri=max(peri,A[i]+A[i+1]+A[i+2]); 
        }
        return peri;
    }
};
