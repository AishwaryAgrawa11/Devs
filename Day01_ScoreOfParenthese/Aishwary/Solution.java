import java.util.Stack;

class Solution {

    public int scoreOfParentheses(String S) {

        Stack<Integer> stack = new Stack<>();
        stack.push(0);

        for (char ch : S.toCharArray()) {
            if (ch == '(') {
                stack.push(0);
            } else {
                int inner = stack.pop();
                int outer = stack.pop();
                stack.push(outer + Math.max(2 * inner, 1));
            }
        }

        return stack.pop();
    }
}
//Time Complexity - O(n)
//Space Complexity - O(1)
