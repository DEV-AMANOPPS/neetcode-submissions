class Solution {
public:
    int maxProfit(vector<int>& nums) {
        // time complexity =o(n^2);
        //    int n = nums.size();
        // int maxprofit = 0;

        // for(int i = 0; i < n; i++) {
        //     int maxi = *max_element(nums.begin() + i, nums.end());
        //     maxprofit = max(maxprofit, maxi - nums[i]);
        // }

        int n = nums.size();
        int minbuy=nums[0];
        int maxprofit=0;
        for(int i=1;i<n;i++){
            minbuy= min(minbuy,nums[i]);
            maxprofit= max(maxprofit,nums[i]-minbuy);

        }
   return maxprofit;
        // return maxprofit;
    }
};
