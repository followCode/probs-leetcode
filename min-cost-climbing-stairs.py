# URL: https://leetcode.com/problems/min-cost-climbing-stairs/

class Solution:
    def minCostClimbingStairs(self, cost: List[int]) -> int:
        dp=[0 for i in range(len(cost)+1)]
        dp[0]=cost[0]
        dp[1]=cost[1]
        for i in range(2,len(dp)-1):
            dp[i]=min(dp[i-1]+cost[i],dp[i-2]+cost[i])
        dp[len(dp)-1]=min(dp[len(dp)-2], dp[len(dp)-3])
        return dp[len(dp)-1]
                
