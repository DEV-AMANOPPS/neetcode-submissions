class Solution {
public:
    void solve(int idx, vector<int>& nums, int target,
               vector<int>& temp, vector<vector<int>>& ans) {
        
        // base case
        if(target == 0) {
            ans.push_back(temp);
            return;
        }

        if(idx == nums.size() || target < 0) return;

        // 🔥 include current element (use only once)
        temp.push_back(nums[idx]);
        solve(idx + 1, nums, target - nums[idx], temp, ans);
        temp.pop_back();

        // 🔥 skip duplicates while excluding
        while(idx + 1 < nums.size() && nums[idx] == nums[idx + 1]) {
            idx++;
        }

        // exclude
        solve(idx + 1, nums, target, temp, ans);
    }

    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end()); // must

        vector<vector<int>> ans;
        vector<int> temp;

        solve(0, nums, target, temp, ans);
        return ans;
    }
};