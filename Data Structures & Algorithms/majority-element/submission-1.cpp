class Solution {
public:
    int majorityElement(vector<int>& nums) {
    //     int count =0;
    //     int candi=0;
    //     for(int i=0;i<nums.size();i++){
    //         if(count==0){
    //             candi=nums[i];
    //         }
    //         if(nums[i]==candi){
    //             count++;
    //         }
    //         else{
    //             count--;
    //         }
    //     }
    //     return candi;
    // }

    int n= nums.size();
    unordered_map<int,int>mpp;
    for(auto num:nums){
        mpp[num]++;
    }


    for(auto it:mpp){
        if(it.second>n/2){
            return it.first;
        }
    }
    return -1;
    }
};