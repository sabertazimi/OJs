/*!
 * \file 1595_symmetry.cc
 * \brief
 *
 * \author sabertazimi, <sabertazimi@gmail.com>
 * \version 1.0
 * \date 2016
 * \license MIT
 */

#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int main(void) {
    int testcase, n;
    int x[1024], y[1024];
    cin >> testcase;

    while (testcase--) {
        cin >> n;

        for (int i = 0; i < n; i++) {
            cin >> x[i] >> y[i];
        }

        int mx, mn;
        mx = mn = x[0];

        // get X-range
        for (int i = 0; i < n; i++) {
            mx = max(mx, x[i]);
            mn = min(mn, x[i]);
        }

        double mid = (mx + mn) / 2.0;
        set< pair<int, int> > S;

        for (int i = 0; i < n; i++) {
            S.insert(make_pair((int)((x[i] - mid) * 2), y[i]));
        }

        int ret = 1;

        for (int i = 0; i < n && ret; i++) {
            ret &= S.find(make_pair((int)(-(x[i] - mid) * 2), y[i])) != S.end();
        }

        cout << (ret ? "YES" : "NO") << endl;
    }

    return 0;
}
