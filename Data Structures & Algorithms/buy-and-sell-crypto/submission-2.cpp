class Solution {
public:
    int maxProfit(vector<int>& nums) {
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
