class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
         int n = nums.size();
        int i = 0, j = 0;
        vector<int> ans;

        while (j < n) {
            // window size abhi chhoti hai
            if (j - i + 1 < k) {
                j++;
            }
            // window size mil gayi
            else if (j - i + 1 == k) {

                // 🔹 max find karo window ke andar
                int mx = nums[i];
                for (int x = i; x <= j; x++) {
                    mx = max(mx, nums[x]);
                }

                // max ko answer me daalo
                ans.push_back(mx);

                // window slide karo
                i++;
                j++;
            }
        }
        return ans;
    }

      
};
