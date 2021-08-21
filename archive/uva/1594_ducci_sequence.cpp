/*!
 * \file 1594_ducci_sequence.cc
 * \brief
 *
 * \author sabertazimi, <sabertazimi@gmail.com>
 * \version 1.0
 * \date 2016
 * \license MIT
 */

#include <iostream>
#include <cmath>
#include <map>
#include <algorithm>

#define LOCAL
#undef LOCAL

#ifdef LOCAL
#include <fstream>
#endif

using namespace std;

struct Node {
    int a[16];
    int n;
    void read(void) {
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
    }
    void ducci(void) {
        int tmp = a[0];
        for (int i = 0; i < n - 1; i++) {
            a[i] = abs(a[i]-a[i+1]);
        }
        a[n-1] = abs(a[n-1]-tmp);
    }
    bool operator<(const Node &b) const {
        for (int i = 0; i < n; i++) {
            if (a[i] != b.a[i]) return a[i] < b.a[i];
        }
        return false;
    }
    bool isZero(void) {
        for (int i = 0; i < n; i++) {
            if (a[i] != 0) return false;
        }
        return true;
    }
} mytuple;

map<Node, bool>vis;

int main(void) {
#ifdef LOCAL
    freopen("input.dat", "r", stdin);
#endif

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        bool isLoop = false;
        cin >> mytuple.n;
        mytuple.read();
        vis.clear();
        vis[mytuple] = true;

        for (int i = 0; i < 2000; i++) {
            mytuple.ducci();

            if (vis[mytuple]) {
                isLoop = true;
                break;
            }

            vis[mytuple] = true;
        }

        if (isLoop && !mytuple.isZero()) cout << "LOOP" << endl;
        else cout << "ZERO" << endl;
    }

    return 0;
}
