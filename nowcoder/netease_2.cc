#include <iostream>
#include <stack>

using namespace std;

int solve(string expr) {
    stack <int> eval;
    int i = 1;
    int len = expr.length();

    eval.push(expr[0] - '0');

    while (i < len) {
        switch (expr[i]) {
            case '+': {
                i++;
                int right = expr[i] - '0';
                int left = eval.top();
                eval.pop();
                int result = left + right;
                eval.push(result);
                break;
            }
            case '-': {
                i++;
                int right = expr[i] - '0';
                int left = eval.top();
                eval.pop();
                int result = left - right;
                eval.push(result);
                break;
            }
            case '*': {
                i++;
                int right = expr[i] - '0';
                int left = eval.top();
                eval.pop();
                int result = left * right;
                eval.push(result);
                break;
            }
            default: {
                eval.push(expr[i] - '0');
                break;
            }
        }
        i++;
    }

    return eval.top();
}

int main(void) {
    int res;
    string expr;

    cin >> expr;
    res = solve(expr);
    cout << res << endl;

    return 0;
}
