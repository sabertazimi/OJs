/*!
 * \file union.cc
 * \brief
 *
 * \author sabertazimi, <sabertazimi@gmail.com>
 * \version 1.0
 * \date 2017
 * \license MIT
 */

const int maxn = 100000 + 10;
int par[maxn];
int rank[maxn];

void init(int n) {
    for (int i = 0; i < n; i++) {
        par[i] = 0;
        rank[i] = 0;
    }
}

int find(int x) {
    if (x == par[x]) {
        return x;
    } else {
        return par[x] = find(par[x]);   // path compression
    }
}

void unite(int x, int y) {
    x = find(x);
    y = find(y);

    if (x == y) {
        return ;
    }

    if (rank[x] < rank[y]) {
        par[x] = y;
    } else {
        par[y] = x;

        if (rank[x] == rank[y]) {
            rank[x]++;
        }
    }
}

bool same(int x, int y) {
    return find(x) == find(y);
}

