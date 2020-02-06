/* URL: https://leetcode.com/problems/boats-to-save-people/ */

class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int ans=0;
        vector<int> m(people.size(),0);
        
        for(int i=people.size()-1;i>0;i--){
            if(m[i]!=1){
              if((people[i]==limit || i==0)){
                  ans++;
                  m[i]=1;
            }
              else{
                int temp=-1;
                for(int j=0;j<i;j++){
                    if((people[j]+people[i] <=limit) && m[j]!=1){
                        temp=j;
                   }
                }
                if(temp!=-1)
                    m[temp]=1;
                ans++;
                m[i]=1;
            }
         }
      }
        for(int i=0;i<m.size();i++){
            if(m[i]==0)
                ans++;
        }
        
        return ans;
    }
};
