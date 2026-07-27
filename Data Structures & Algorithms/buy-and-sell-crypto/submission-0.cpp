class Solution {
public:
    int maxProfit(vector<int>& nums) {
           int n = nums.size();
        int maxprofit = 0;

        for(int i = 0; i < n; i++) {
            int maxi = *max_element(nums.begin() + i, nums.end());
            maxprofit = max(maxprofit, maxi - nums[i]);
        }

        return maxprofit;
    }
};
