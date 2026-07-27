#include <bits/stdc++.h>
#include <cstring>   // ✅ required for memset
using namespace std;

class Solution {
public:
    
    int dp[21][1001];
    
    int solve(vector<int>& nums, int sum, int n) {
        
        if (n == 0) {
            if (sum == 0) return 1;
            else return 0;
        }
        
        if (dp[n][sum] != -1)
            return dp[n][sum];
        
        if (nums[n - 1] <= sum) {
            return dp[n][sum] =
                solve(nums, sum - nums[n - 1], n - 1) + 
                solve(nums, sum, n - 1);
        } else {
            return dp[n][sum] =
                solve(nums, sum, n - 1);
        }
    }
    
    int findTargetSumWays(vector<int>& nums, int target) {
        
        int total = 0;
        for (int x : nums) total += x;
        
        if ((target + total) % 2 != 0 || abs(target) > total)
            return 0;
        
        int sum = (target + total) / 2;
        
        memset(dp, -1, sizeof(dp));  // now works ✅
        
        return solve(nums, sum, nums.size());
    }
};