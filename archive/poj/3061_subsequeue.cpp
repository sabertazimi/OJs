/*!
 * \file 3061_subsequeue.cc
 * \brief
 *
 * \author sabertazimi, <sabertazimi@gmail.com>
 * \version 1.0
 * \date 2017
 * \license MIT
 */

#include <iostream>

using namespace std;

const int maxn = 100000 + 10;

int n, S;
int a[maxn];

void solve(void) {
    int res = n+1;
    int s = 0;
    int t = 0;
    int sum = 0;
    
    while (true) {
        while (t < n && sum < S) {
            sum += a[t++];
        }
        
        if (sum < S) break;
        
        res = min(res, t-s);
        sum -= a[s++];
    }
    
    if (res > n) {
        res = 0;
    }
    
    cout << res << endl;
}

int main(void) {
    int kase;
    cin >> kase;
    
    while (kase--) {
        cin >> n >> S;
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        solve();
    }
    
    return 0;
}


