#include <iostream>
#include <stack>

using namespace std;

int main(void) {
    const int MAXN = 1000 + 10;
    int n, target[MAXN];
    
    while (true) {
        cin >> n;
        if (n == 0) {
            break;
        }
        
        while (true) {
            cin >> target[0];
            if (target[0] == 0) {
                cout << endl;
                break;
            }
            
            for (int i = 1; i < n; i++) {
                cin >> target[i];
            }
            
            int ok = 1;
            int A = 1, B = 0;
            stack <int> s;
            while (B < n) {
                if (A == target[B]) {
                    A++;
                    B++;
                } else if (!s.empty() && s.top() == target[B]) {
                    s.pop();
                    B++;
                } else if (A <= n) {
                    s.push(A++);
                } else {
                    ok = 0;
                    break;
                }
            }
            
            cout << (ok ? "Yes" : "No") << endl;
        }
    }
    
    return 0;
}