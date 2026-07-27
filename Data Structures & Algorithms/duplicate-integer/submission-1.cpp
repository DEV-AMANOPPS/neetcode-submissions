class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // dekho issho mai hashh map se bhi kar sakta hu lekin space jyada le ga wo
  int n = nums.size();
  sort(nums.begin(),nums.end());
        int count =0;
        for(int i=0;i<n;i++){
            if(nums[i]==nums[i-1]){
                count++;
            }

        }
        if(count>=1){
            return true;
        }
        return false;
    }
    
};