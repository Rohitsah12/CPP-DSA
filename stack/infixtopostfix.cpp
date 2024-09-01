#include <iostream>
#include <stack>
#include <string>

int priority(char c) {
    if (c == '^') return 3;
    else if (c == '*' || c == '/') return 2;
    else if (c == '+' || c == '-') return 1;
    else return -1;
}

std::string infixToPostfix(std::string s) {
    int n = s.length();
    std::stack<char> st;
    std::string ans;

    for (int i = 0; i < n; i++) {
        // If the character is an operand, add it to the output string.
        if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')) {
            ans += s[i];
        }
        // If the character is '(', push it to the stack.
        else if (s[i] == '(') {
            st.push(s[i]);
        }
        // If the character is ')', pop and add to output from the stack
        // until an '(' is encountered.
        else if (s[i] == ')') {
            while (!st.empty() && st.top() != '(') {
                ans += st.top();
                st.pop();
            }
            st.pop(); // pop '('
        }
        // If the character is an operator
        else {
            while (!st.empty() && priority(s[i]) <= priority(st.top())) {
                ans += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }

    // Pop all the operators from the stack
    while (!st.empty()) {
        ans += st.top();
        st.pop();
    }

    return ans;
}

int main() {
    std::string exp = "a+b*(c^d-e)^(f+g*h)-i";
    std::cout << infixToPostfix(exp) << std::endl;
    return 0;
}
