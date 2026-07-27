class Solution {
public:
    int lengthOfLongestSubstring(string s){
        int i=0;
        int maxlen=0;
        unordered_set<char>st;

        for(int j=0;j<s.size();j++){

            while(st.count(s[j])){
                st.erase(s[i]); // agar s[j] hai set me to usske first occurance ko hata do autr i ki i++ kar do
                i++;
            }
            st.insert(s[j]);

            maxlen= max(maxlen,j-i+1);

        }
 
    return maxlen;
    }
};
