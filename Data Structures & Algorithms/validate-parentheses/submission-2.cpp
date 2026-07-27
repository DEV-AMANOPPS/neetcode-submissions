class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (char ch : s) {
            // opening brackets
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            }
            else {
                // stack empty → invalid
                if (!st.empty()) {
                    if ((ch == ')' && st.top() == '(') ||
                        (ch == '}' && st.top() == '{') ||
                        (ch == ']' && st.top() == '[')) {
                        st.pop();
                    }
                    else {
                        return false;
                    }
                }
                else {
                    return false;
                }
            }
        }
        return st.empty();
    }
};