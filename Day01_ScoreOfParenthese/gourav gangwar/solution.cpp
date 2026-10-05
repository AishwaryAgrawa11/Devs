class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> t;
        t.push(0);

        for (char c : s) {
            if (c == '(') {
                t.push(0);
            }
            else {
                int x = t.top();
                t.pop();
                int va;
                if (x == 0) {
                    va = 1;}
                else {
                    va = 2 * x;
                }
                t.top() += va;
            }
        }
        return t.top();
    }
};

Time  → O(n)
Space → O(n)
