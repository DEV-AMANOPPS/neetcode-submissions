class Solution {
public:
    void solve(int idx, vector<int>& nums, int target, vector<int>& temp, vector<vector<int>>& ans) {
        
        // Base case
        if(target == 0) {
            ans.push_back(temp);
            return;
        }
        
        if(idx == nums.size() || target < 0) {
            return;
        }

        // 1. Include current element
        temp.push_back(nums[idx]);
        solve(idx, nums, target - nums[idx], temp, ans); // stay at same index
        temp.pop_back(); // backtrack

        // 2. Exclude current element
        solve(idx + 1, nums, target, temp, ans);
    }

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        vector<int> temp;

        solve(0, nums, target, temp, ans);
        return ans;
    }
};