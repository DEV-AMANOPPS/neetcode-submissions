class Solution {
public:
set<vector<int>>st;
void permut(int idx,vector<int>&nums , vector<vector<int>>&ans){
    if(idx==nums.size()){
      if(st.find(nums)==st.end()){
       ans.push_back(nums);
       st.insert(nums);
      }
       
        return;
    }
    for(int i=idx;i<nums.size();i++){
        swap(nums[idx],nums[i]);
        permut(idx+1,nums,ans);
        swap(nums[idx],nums[i]);
    }
};
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        permut(0,nums,ans);
        return ans;
        
    }
};