class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (char c : s) {
            // 1. Push opening brackets
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } 
            // 2. Handle closing brackets
            else {
                // Stack can't be empty nahi ho sakta jab ham encounter a closing bracket
                if (st.empty()) return false;

                // Check for valid matching pair
                if ((c == ')' && st.top() == '(') ||
                    (c == '}' && st.top() == '{') ||
                    (c == ']' && st.top() == '[')) {
                    st.pop();
                } else {
                    return false;
                }
            }
        }

        // Must be empty at the end (all opened brackets were closed)
        return st.empty();
    }
};