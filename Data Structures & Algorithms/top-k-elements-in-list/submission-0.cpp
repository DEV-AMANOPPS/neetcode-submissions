class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
  // hummnw hashmap me saari value daaldi hai aur uska countmil bhi gya hai 
        for(auto num:nums){
            mpp[num]++;
        }

        priority_queue<pair<int,int>>maxHeap;

        for(auto it :mpp){
            maxHeap.push({it.second,it.first});  // humm yaha pe {fre,number} ke basis pe push karenge in the max heap jisme jisski count ki value jyada hogi woh mere heap ke top element hoga 
        }

        vector<int>ans;

        while(k--){
            ans.push_back(maxHeap.top().second);
            maxHeap.pop();
        }
 return ans;
    }
};
