//brute approach
class Solution {
public:
    int scoreOfParentheses(string s) {
        while (s != "1") {
            // Find "()"
            for (int i = 0; i + 1 < s.size(); i++) {
                if (s[i] == '(' && s[i + 1] == ')') {
                    s.replace(i, 2, "1");
                    break;
                }
            }

            // Find (number)
            for (int i = 0; i < s.size(); i++) {
                if (s[i] == '(' && isdigit(s[i + 1])) {
                    int j = i + 1;
                    int num = 0;

                    while (j < s.size() && isdigit(s[j])) {
                        num = num * 10 + (s[j] - '0');
                        j++;
                    }

                    num *= 2;

                    s.replace(i, j - i + 1, to_string(num));
                    break;
                }
            }
        }

        return stoi(s);
    }
};

//better approach - stack
class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> st;
        st.push(0);

        for (char c : s) {

            if (c == '(') {
                st.push(0);
            }
            else {
                int curr = st.top();
                st.pop();

                int value;

                if (curr == 0)
                    value = 1;          // ()
                else
                    value = 2 * curr;  // (A)

                st.top() += value;
            }
        }

        return st.top();
    }
};

///best approach - without stack
class Solution {
public:
    int scoreOfParentheses(string s) {
        int depth = 0;
        int ans = 0;

        for (int i = 0; i < s.size(); i++) {

            if (s[i] == '(') {
                depth++;
            }
            else {
                depth--;

                // Direct ()
                if (s[i - 1] == '(') {
                    ans += (1 << depth);
                }
            }
        }

        return ans;
    }
};