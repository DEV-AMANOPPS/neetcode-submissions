class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
       priority_queue<int, vector<int>, greater<int>> min;

     for (int i=0;i<n;i++){
      min.push(nums[i]);
     }

     while(min.size()>k){
        min.pop();
     }

     return min.top();

        
    }
};
