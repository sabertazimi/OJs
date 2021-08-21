/*!
 * \file 1182_food_chain.cc
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
int par[maxn];
int rankk[maxn];

void init(int n) {
    for (int i = 0; i < n; i++) {
        par[i] = i;
        rankk[i] = 0;
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

int N, K;
int T[maxn], X[maxn], Y[maxn];

void solve(void) {
    init(N * 3);
    
    int ans = 0;
    
    for (int i = 0; i < K; i++) {
        int t = T[i];
        int x = X[i] - 1;
        int y = Y[i] - 1;
        
        if (x < 0 || x >= N || y < 0 || y >= N) {
            ans++;
            continue;
        }
        
        if (t == 1) {
            if (same(x, y + N) || same(x, y + 2 * N)) {
                ans++;
            } else {
                unite(x, y);
                unite(x + N, y + N);
                unite(x + 2 * N, y + 2 * N);
            }
        } else {
            if (same(x, y) || same(x, y + 2 * N)) {
                ans++;
            } else {
                unite(x, y + N);
                unite(x + N, y + 2 * N);
                unite(x + 2 * N, y);
            }
        }
    }
    
    cout << ans << endl;
}

int main(void) {
    cin >> N >> K;
    
    for (int i = 0; i < K; i++) {
        cin >> T[i] >> X[i] >> Y[i];
    }
    
    solve();
    
    return 0;
}



