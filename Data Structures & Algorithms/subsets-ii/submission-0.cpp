class Solution {
public:

    set<vector<int>> st;

    void solve(int i, vector<int>& nums, vector<int>& temp, vector<vector<int>>& ans) {

        if(i == nums.size()) {
            if(st.find(temp) == st.end()) {
                ans.push_back(temp);
                st.insert(temp);
            }
            return;
        }

        // include
        temp.push_back(nums[i]);
        solve(i + 1, nums, temp, ans);
        temp.pop_back();

        // exclude
        solve(i + 1, nums, temp, ans);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // important
        vector<vector<int>> ans;
        vector<int> temp;

        solve(0, nums, temp, ans);
        return ans;
    }
};