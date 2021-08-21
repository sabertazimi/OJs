/*!
 * \file 3169_layout.cc
 * \brief
 *
 * \author sabertazimi, <sabertazimi@gmail.com>
 * \version 1.0
 * \date 2017
 * \license MIT
 */
 
#include <iostream>
#include <climits>

using namespace std;
 
const int maxn = 10000+10;
 
int N, ML, MD;
int AL[maxn], BL[maxn], DL[maxn];
int AD[maxn], BD[maxn], DD[maxn];
int d[maxn];

void solve(void) {
    fill(d, d+N, INT_MAX);
    d[0] = 0;
    
    for (int k = 0; k < N; k++) {
        for (int i = 0; i+1 < N; i++) {
            if (d[i+1] < INT_MAX) {
                d[i] = min(d[i], d[i+1]);
            }
        }
        
        for (int i = 0; i < ML; i++) {
            if (d[AL[i] - 1] < INT_MAX) {
                d[BL[i]-1] = min(d[BL[i]-1], d[AL[i]-1]+DL[i]);
            }
        }
        
        for (int i = 0; i < MD; i++) {
            if (d[BD[i] - 1] < INT_MAX) {
                d[AD[i]-1] = min(d[AD[i]-1], d[BD[i]-1]-DD[i]);
            }
        }
    }
    
    int res = d[N-1];
    
    if (d[0] < 0) {
        res = -1;
    } else if (res == INT_MAX) {
        res = -2;
    }
    
    cout << res << endl;
}

int main(void) {
    cin >> N >> ML >> MD;
    
    for (int i = 0; i < ML; i++) {
        cin >> AL[i] >> BL[i] >> DL[i];
    }
    
    for (int i = 0; i < MD; i++) {
        cin >> AD[i] >> BD[i] >> DD[i];
    }
    
    solve();
    
    return 0;
}




