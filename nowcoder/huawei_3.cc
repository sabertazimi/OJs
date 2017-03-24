/*
* @Author: sabertazimi
* @Date:   2017-03-24 19:00:48
* @Last Modified by:   sabertazimi
* @Last Modified time: 2017-03-24 19:52:48
*/

#include <iostream>
#include <fstream>
#include <queue>

using namespace std;

int G[6][6] = {
    {0, 2, 10, 5, 3, -1},
    {-1, 0, 12, -1, -1, 10},
    {-1, -1, 0, -1, 7, -1},
    {2, -1, -1, 0, 2, -1},
    {4, -1, -1, 1, 0, -1},
    {3, -1, 1, -1, 2, 0}
};
int dist[6];
int par[6];
typedef pair<int, int> P;

void solve(void) {
    priority_queue< P, vector<P>, greater<P> > que;
    fill(par, par+6, -1);
    fill(dist, dist+6, 1000);

    par[4] = 4;
    dist[4] = 0;
    que.push(P(dist[4], 4));

    while (!que.empty()) {
        P p = que.top();
        que.pop();
        int v = p.second;
        int d = p.first;

        for (int i = 0; i < 6; i++) {
            int e = G[v][i];
            if (i != v && e != -1) {
                int d2 = d + e;

                if (dist[i] > d2) {
                    par[i] = v;
                    dist[i] = d2;
                    que.push(P(dist[i], i));
                }
            }
        }
    }

}

int main(void) {
    int X, Y;

    cin >> X >> Y;

    X--;
    Y--;

    if (Y >= 0) {
        for (int i = 0; i < 6; i++) {
            G[Y][i] = -1;
            G[i][Y] = -1;
        }
    }

    solve();

    if (par[X] == -1) {
        cout << "1000" << endl;
        cout << "[]" << endl;
        return 0;
    }

    cout << dist[X] << endl;

    int i = 5;
    int res[6];
    res[i] = X;
    while (res[i] != 4) {
        if (par[res[i]] == -1) {
            break;
        }
        res[i-1] = par[res[i]];
        i--;
    }
    res[i] = 4;

    cout << "[";
    for (; i < 6; i++) {
        if (i != 5) {
            cout << res[i]+1 << ", ";
        } else {
            cout << res[i]+1;
        }
    }
    cout << "]" << endl;

    return 0;
}
