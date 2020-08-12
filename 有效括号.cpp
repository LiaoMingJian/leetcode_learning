class Solution {
public:
    bool isValid(string s) {
        if (s.size() == 0) {
            return true;
        }
        if (s.size() == 1) {
            return false;
        }

        stack<char> st;
        st.push(s[0]);
        if (s[0] == '}' || s[0] == ']' || s[0] == ')') {
            return false;
        }

        for (int i = 1; i < s.size(); ++i) {
            if (s[i] == '{' || s[i] == '[' || s[i] == '(') {
                st.push(s[i]);
            } else if (s[i] == '}' && st.size() != 0 && st.top() == '{') {
                st.pop();
            } else if (s[i] == ']' && st.size() != 0 && st.top() == '[') {
                st.pop();
            } else if (s[i] == ')' && st.size() != 0 && st.top() == '(') {
                st.pop();
            } else {
                return false;
            }
        }

            if (st.size() == 0) {
                return true;
            } else {
                return false;
            }

        }
    
};

~

