/*!
 * \file 3255_roadblocks.cc
 * \brief
 *
 * \author sabertazimi, <sabertazimi@gmail.com>
 * \version 1.0
 * \date 2017
 * \license MIT
 */

#include <iostream>
#include <fstream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

const int maxn = 5000 + 10;

class edge {
public:
    int to;
    int cost;
    edge(int to = 0, int cost = 0) {
        this->to = to;
        this->cost = cost;
    }
    ~edge(void) {
        this->to = 0;
        this->cost = 0;
    }
};

typedef pair<int, int> P;

int N, R;
vector<edge> G[maxn];
int dist[maxn];
int dist2[maxn];

void solve(void) {
    priority_queue< P, vector<P>, greater<P> > que;
    fill(dist, dist+N, INT_MAX);
    fill(dist2, dist2+N, INT_MAX);
    dist[0] = 0;
    que.push(P(0, 0));
    
    while (!que.empty()) {
        P p = que.top();
        que.pop();
        int v = p.second;
        int d = p.first;
        
        if (dist2[v] < d) {
            continue;
        }
        
        for (int i = 0; i < (int)G[v].size(); i++) {
            edge &e = G[v][i];
            int d2 = d + e.cost;
            
            if (dist[e.to] > d2) {
                swap(dist[e.to], d2);
                que.push(P(dist[e.to], e.to));
            }
            
            if (dist2[e.to] > d2 && dist[e.to] < d2) {
                dist2[e.to] = d2;
                que.push(P(dist2[e.to], e.to));
            }
        }
    }
    
    cout << dist2[N-1] << endl;
}

int main(void) {
    // freopen("input.dat", "r", stdin);
    
    cin >> N >> R;
    
    for (int i = 0; i < R; i++) {
        int from = 0;
        int to = 0;
        int cost = 0;
        cin >> from >> to >> cost;
        
        from--;
        to--;
        
        edge e1(to, cost);
        edge e2(from, cost);
        
        G[from].push_back(e1);
        G[to].push_back(e2);
    }
    
    solve();
    
    return 0;
}

