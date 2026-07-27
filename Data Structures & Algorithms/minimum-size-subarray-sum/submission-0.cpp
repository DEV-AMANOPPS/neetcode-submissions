class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
       
        int n = nums.size();
        int sum=0;
        int minlength=INT_MAX;
        int i=0;
        int j=0;
        while(j<n){
            sum+=nums[j];
            while(sum>=target){
                minlength=min(minlength,j-i+1);
                sum-=nums[i];
                i++;
            }
            j++;
           
        
        }
         if(minlength==INT_MAX) return 0;
        return minlength;
    }
};