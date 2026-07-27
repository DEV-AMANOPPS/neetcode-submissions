class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        // usinh hash map concept t.c = o(n); sc=(n);
        // create a unordered_map
        int n =nums.size();
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            if(mpp.count(nums[i] )&& abs(i-mpp[nums[i]])<=k) return true;
           
           mpp[nums[i]]=i;
        }
        return false;

        }
};