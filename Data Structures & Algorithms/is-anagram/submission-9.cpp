class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
      
      unordered_map<char,int>seen;
      for(auto num:s){
        seen[num]++;
      }

      for(auto num:t){
        if(seen.find(num)!=seen.end()){
            seen[num]--;
        }
        else{
            return false;
        }
      }

      // now check that seen me p.second ki value 0 hai ki nahi 
      for(auto&p:seen){
        if(p.second!=0) return false;
      }
      return true;
    }
};
