class Solution {
public:
    bool validPalindrome(string s) {
            int i = 0, j = s.size() - 1;

        while (i < j && s[i] == s[j]) {
            i++;
            j--;
        }

        if (i >= j) return true;   // already palindrome

        // try skipping left character
        int l = i + 1, r = j;
        while (l < r && s[l] == s[r]) {
            l++;
            r--;
        }
        if (l >= r) return true;

        // try skipping right character
        l = i;
        r = j - 1;
        while (l < r && s[l] == s[r]) {
            l++;
            r--;
        }

        return l >= r;
    }
        
    
};