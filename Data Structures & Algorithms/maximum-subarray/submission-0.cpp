class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int sum=0;
        int max_sum=-1;
        int i=0;
        int j=0;
        while(j<n){
            sum+=nums[j];
           
            if(sum>max_sum){
                max_sum=sum;
                
            }

             if(sum<0) sum=0;
            j++;
        }
 return max_sum;
    }
};
