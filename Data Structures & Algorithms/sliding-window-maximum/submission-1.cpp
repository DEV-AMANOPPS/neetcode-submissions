class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
         int n = nums.size();
        int i = 0, j = 0;
        vector<int> ans;

        while (j < n) {

            // window size chhoti hai
            if (j - i + 1 < k) {
                j++;
            }

            // window size mil gayi
            else if (j - i + 1 == k) {

                // 🔹 window ke andar max nikaalo
                int mx = *max_element(nums.begin() + i,
                                      nums.begin() + j + 1);

                ans.push_back(mx);

                // 🔹 window slide karo
                i++;
                j++;
            }
        }

        return ans;
    }

      
};
