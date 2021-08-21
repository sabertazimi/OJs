/*!
 * \file 3617_best_cow_line.cc
 * \brief
 *
 * \author sabertazimi, <sabertazimi@gmail.com>
 * \version 1.0
 * \date 2017
 * \license MIT
 */

#include <iostream>

using namespace std;

const int maxn = 2000 + 10;

int n;
char str[maxn];

void solve(void) {
    int a = 0, b = n - 1;
    int res = 0;
    
    while (a <= b) {
        bool left = false;
        
        for (int i = 0; a + i <= b; i++) {
            if (str[a+i] < str[b-i]) {
                left = true;
                break;
            } else if (str[a+i] > str[b-i]) {
                left = false;
                break;
            }
        }
        
        res++;
        
        if (left) {
            cout << str[a++];
            if (res % 80 == 0) cout << endl;
        } else {
            cout << str[b--];
            if (res % 80 == 0) cout << endl;
        }
    }
}

int main(void) {
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }
    
    solve();
    
    return 0;
}
