/*!
 * \file best_takeout.cc
 * \brief No.4
 *
 * \author sabertazimi, <sabertazimi@gmail.com>
 * \version 1.0
 * \date 2016
 * \license MIT
 */

#include <iostream>
#include <queue>

using namespace std;

///> node def
class Node {
public:
    int x, y;
    int step;
    Node(int x = 0, int y = 0, int step = 0) {
        this->x = x;
        this->y = y;
        this->step = step;
    }
};

///> matrix def(nodes, not edges)
static int mp[1001][1001] = { 0 };
static bool vis[1001][1001] = { 0 };
static int mv[4][2] = {
    -1, 0,      // up
    1, 0,       // down
    0, -1,      // left
    0, 1        // right
};

int bfs(queue<Node> &sp, int n, int k) {
    Node prev;
    int finished = 0;
    long long cost = 0;

    while (!sp.empty()) {
        prev = sp.front();
        sp.pop();

        for (int i = 0; i < 4; i++) {
            Node next = prev;
            next.x += mv[i][0];
            next.y += mv[i][1];
            next.step++;

            if (!vis[next.x][next.y] && next.x >=1 && next.x <= n && next.y >= 1 && next.y <= n) {
                vis[next.x][next.y] = true;

                if (mp[next.x][next.y]) {
                    cost += next.step * mp[next.x][next.y];
                    finished++;

                    if (finished >= k) {
                        return cost;
                    }
                }

                sp.push(Node(next.x, next.y, next.step));
            }
        }
    }

    return 0;
}

int main(void) {
    int n, m, k, d;
    int x, y, z;

    ///> bfs queue
    queue<Node> sp;

    cin >> n >> m >> k >> d;

    for (int i = 0; i < m; i++) {
        cin >> x >> y;
        vis[x][y] = true;
        sp.push(Node(x, y, 0));
    }

    for (int i = 0; i < k; i++) {
        cin >> x >> y >> z;
        mp[x][y] = z;
    }

    for (int i = 0; i < d; i++) {
        cin >> x >> y;
        vis[x][y] = true;
    }

    cout << bfs(sp, n, k) << endl;

    return 0;
}