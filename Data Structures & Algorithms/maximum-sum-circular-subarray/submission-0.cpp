class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
      int n =nums.size();
      int curr_max=0; int max_sum =nums[0];
      int curr_min=0; int min_sum= nums[0];
      int total_sum =0;
      int sum =0;

      for(int num : nums){
        total_sum+=num;

        curr_max= max(num,curr_max+num);
        max_sum= max(curr_max,max_sum);

        curr_min= min(num,curr_min+num);
        min_sum=min(curr_min,min_sum);

        

      }
if(max_sum<0) return max_sum;
        
        return max(max_sum,total_sum-min_sum);
    }
};