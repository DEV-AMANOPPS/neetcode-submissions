class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> mp;  // value → index

        for (int i = 0; i < nums.size(); i++) {
            int need = target - nums[i];

            // If the required partner is already in the map
            if (mp.find(need) != mp.end()) {
                return {mp[need], i};  // smaller index first
            }

            mp[nums[i]] = i;
        }

        return {}; // This will never execute (solution guaranteed)
    }
};
