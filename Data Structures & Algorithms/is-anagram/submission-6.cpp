class Solution {
public:
    bool isAnagram(string s, string t) {
    if(s.size() != t.size()) return false;

    unordered_map<char,int>seen;
    for(auto nums:s){
        seen[nums]++;

    }
    for(auto nums:t){
        if(seen.find(nums)!=seen.end()){
            seen[nums]--;
        }
     
      else {
                return false;   // extra character in t
            }
        }

        // check if all counts are zero
        for(auto p : seen){
            if(p.second != 0) return false;
        }

        return true;
    }
    
};
