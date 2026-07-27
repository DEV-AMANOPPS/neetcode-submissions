class Solution {
public:

    void backtrack(int open, int close, int n, string &curr, vector<string> &ans) {

        // ✅ 1. Base case
        if(curr.size() == 2 * n) {
            ans.push_back(curr);
            return;
        }

        // ✅ 2. Try to add '('
        if(open < n) {
            curr.push_back('(');                 // add
            backtrack(open + 1, close, n, curr, ans);
            curr.pop_back();                     // undo (backtrack)
        }

        // ✅ 3. Try to add ')'
        if(close < open) {
            curr.push_back(')');
            backtrack(open, close + 1, n, curr, ans);
            curr.pop_back();                     // undo
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string curr = "";
        backtrack(0, 0, n, curr, ans);
        return ans;
    }
};