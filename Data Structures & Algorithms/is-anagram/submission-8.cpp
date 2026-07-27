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
            seen[nums]--;      // ye to true ki condition hai 
        }
        else{
            return false;   // aur ye jaab condition hi nahi mili to 
        }
    }
      

// aab agagr true ki condition mi bhi gayi to check karo kya saab ka count =0 aagya hai  aaagar aagya hai to return true nahi to false 
        // check if all counts are zero
        for(auto p : seen){
            if(p.second != 0) return false;
        }

        return true;
    }
    
};
