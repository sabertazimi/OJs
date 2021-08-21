/*!
* \file 3723_conscription.cc
* \brief
*
* \author sabertazimi, <sabertazimi@gmail.com>
* \version 1.0
* \date 2017
* \license MIT
*/

#include <iostream>
#include <algorithm>
#include <fstream>

using namespace std;

const int maxn = 50000 + 10;
int par[maxn];
int rankk[maxn];

void init(int n) {
    for (int i = 0; i < n; i++) {
        par[i] = i;
        rankk[i] = 0;
    }
}

int find(int x) {
    while (x != par[x]) {
        // path compression
        par[x] = par[par[x]];
        
        x = par[x];
    }
    
    return x;
}

void unite(int x, int y) {
    x = find(x);
    y = find(y);
    
    if (x == y) {
        return ;
    }
    
    if (rankk[x] < rankk[y]) {
        par[x] = y;
    } else {
        par[y] = x;
        
        if (rankk[x] == rankk[y]) {
            rankk[x]++;
        }
    }
}

bool same(int x, int y) {
    return find(x) == find(y);
}

class edge {
public:
    int u;
    int v;
    int cost;
    edge(int u = -1, int v = -1, int cost = -1) {
        this->u = u;
        this->v = v;
        this->cost = cost;
    }
};

bool comp(const edge &e1, const edge &e2) {
    return e1.cost < e2.cost;
}

edge es[maxn];
int V, E;

int kruskal(void) {
    sort(es, es + E, comp);
    init(V);
    int res = 0;
    
    for (int i = 0; i < E; i++) {
        edge e = es[i];
        
        if (!same(e.u, e.v)) {
            unite(e.u, e.v);
            res += e.cost;
        }
    }
    
    return res;
}

int N, M, R;
int x[maxn], y[maxn], d[maxn];

void solve(void) {
    V = N+M;
    E = R;
    
    for (int i = 0; i < R; i++) {
        es[i] = edge(x[i], N+y[i], -d[i]);
    }
    
    int ans = 10000 * (N+M) + kruskal();
    cout << ans << endl;
}

int main(void) {
    // freopen("input.dat", "r", stdin);
    int kase;
    cin >> kase;
    
    while (kase--) {
        cin >> N >> M >> R;
        
        for (int i = 0; i < R; i++) {
            cin >> x[i] >> y[i] >> d[i];
        }
        
        solve();
    }
    
    return 0;
}
