/*!
 * \file 10763_foreign_exchange.cc
 * \brief
 *
 * \author sabertazimi, <sabertazimi@gmail.com>
 * \version 1.0
 * \date 2016
 * \license MIT
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define LOCAL
// #undef LOCAL

#ifdef LOCAL
#include <fstream>
#endif

struct ab {
    int a, b, c;

    ab(int a = 0, int b = 0, int c = 0) {
        this->a = a;
        this->b = b;
        this->c = c;
    }
};

bool cmp(const ab &a, const ab &b) {
    if (a.a != b.a) return !!(a.a - b.a);
    return !!(a.b - b.b);
}

int main(void) {
#ifdef LOCAL
    freopen("input.dat", "r", stdin);
#endif

    int n, a, b;

    while (cin >> n) {
        if (!n) break;
        vector<ab> D;

        for (int i = 0; i < n; i++) {
            cin >> a >> b;
            if (a > b) D.push_back(ab(b, a, 1));
            else D.push_back(ab(a, b, 0));
        }

        sort(D.begin(), D.end(), cmp);

        int ta = 0, tb = 0, flag = 0;
        for (int i = 0 ; i < n; i++) {
            if (!D[i].c) ta++;
            else tb++;

            if (i == n-1 || (D[i].a != D[i+1].a && D[i].b != D[i+1].b)) {
                if (ta != tb) flag = 1;
                ta = 0, tb = 0;
            }
        }

        if (flag) cout << "NO" << endl;
        else cout << "YES" << endl;
    }

    return 0;
}
