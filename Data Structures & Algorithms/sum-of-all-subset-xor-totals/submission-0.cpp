class Solution {
public:
int solve (vector<int>& nums,int i ,int currXOR){
    if(i==nums.size()) return currXOR;

    //include karo 
    int include = solve(nums,i+1,currXOR^nums[i]);

    // exclude
    int exclude = solve(nums,i+1,currXOR);

    return include+exclude;


}



    int subsetXORSum(vector<int>& nums) {

        return solve(nums,0,0);
        
    }
};