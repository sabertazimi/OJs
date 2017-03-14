/*!
 * \file 3320_reading_problem.cc
 * \brief
 *
 * \author sabertazimi, <sabertazimi@gmail.com>
 * \version 1.0
 * \date 2017
 * \license MIT
 */

#include <iostream>
#include <set>
#include <map>

using namespace std;

const int maxn = 1000000 + 10;

int P;
int a[maxn];
set<int> all;
map<int,int> count;

void solve(void) {
    all.clear();
    count.clear();

    for (int i = 0; i < P; i++) {
        all.insert(a[i]);
    }

    int n = all.size();
    int res = P;
    int s = 0;
    int t = 0;
    int num = 0;

    while (true) {
        while (t < P && num < n) {
            if (count[a[t++]]++ == 0) {
                num++;
            }
        }

        if (num < n) break;

        res = min(res, t-s);

        if (--count[a[s++]] == 0) {
            num--;
        }
    }

    cout << res << endl;
}

int main(void) {
    cin >> P;

    for (int i = 0; i < P; i++) {
        cin >> a[i];
    }

    solve();

    return 0;
}



