/*!
 * \file 2431_expedition.cc
 * \brief 经过加油站时, 可以在以后任意时刻使用这些油
 *
 * \author sabertazimi, <sabertazimi@gmail.com>
 * \version 1.0
 * \date 2017
 * \license MIT
 */
 
#include <iostream>
#include <queue>

const int maxn = 10000 + 10;
int N;
int L, P;
int A[maxn], B[maxn];

using namespace std;

void solve(void) {
    A[N] = L;
    B[N] = 0;
    N++;
    
    priority_queue <int> que;
    int ans = 0;
    int pos = 0;
    int tank = P;
    
    for (int i = 0; i < N; i++) {
        int d = A[i] - pos;
        
        while (tank - d < 0) {
            if (que.empty()) {
                cout << "-1" << endl;
                return ;
            }
            
            tank += que.top();
            que.pop();
            ans++;
        }
        
        tank -= d;
        
        // arrive at i, store fule at this station
        pos = A[i];
        que.push(B[i]);
    }
    
    cout << ans << endl;
}

int main(void) {
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        cin >> A[i] >> B[i];
    }
    
    cin >> L >> P;
    
    solve();
    
    return 0;
}
