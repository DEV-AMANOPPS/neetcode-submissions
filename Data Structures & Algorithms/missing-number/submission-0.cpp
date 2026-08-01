class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int xorr1=0;
        int xorr2=0;
        for(int i =0;i<n;i++){
            xorr1=xorr1^nums[i];
        }

        for(int i =0;i<=n;i++){
            xorr2=xorr2^i;
        }
        return xorr1^xorr2;
        
    }
};
