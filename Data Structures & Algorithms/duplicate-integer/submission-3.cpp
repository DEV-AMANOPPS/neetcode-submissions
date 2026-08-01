class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // dekho issho mai hashh map se bhi kar sakta hu lekin space jyada le ga wo
        // as recommended complexity is o(n) and space is also o(n) then sure use hash map
  int n = nums.size();
  unordered_map<int,int>mpp;

  for(auto num:nums){
    mpp[num]++;
  }

  for(auto it : mpp){
    if(it.second>=2){
        return true;
    }


  }
  return false;
    }
    
};