/*!
* \file 1852_ants.cc
* \brief
*
* \author sabertazimi, <sabertazimi@gmail.com>
* \version 1.0
* \date 2017
* \license MIT
*/

#include <iostream>
#include <algorithm>

using namespace std;

const int maxn = 1000000 + 10;

int L, n;
int x[maxn];
int kase;

void solve() {
    int minT = 0;
    for (int i = 0; i < n; i++) {
        minT = max(minT, min(x[i], L-x[i]));
    }
    
    int maxT = 0;
    for (int i = 0; i < n; i++) {
        maxT = max(maxT, max(x[i], L-x[i]));
    }
    
    cout << minT << " " << maxT << endl;
}

int main(void) {
    cin >> kase;
    
    while (kase--) {
        cin >> L;
        cin >> n;
        
        for (int i = 0; i < n; i++) {
            cin >> x[i];
        }
        
        solve();    
    }
    
    return 0;
}

