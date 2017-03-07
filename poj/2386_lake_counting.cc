/*!
 * \file 2386_lake_counting.cc
 * \brief
 *
 * \author sabertazimi, <sabertazimi@gmail.com>
 * \version 1.0
 * \date 2017
 * \license MIT
 */

#include <iostream>
#include <fstream>

using namespace std;

#define LOCAL
#undef LOCAL

const int maxn = 100 + 10;

int N, M;
char board[maxn][maxn];

void dfs(int x, int y) {
    board[x][y] = '.';
    
    for (int dx = -1; dx <= 1; dx++) {
        for (int dy = -1; dy <= 1; dy++) {
            int nx = x + dx;
            int ny = y + dy;
            
            if (0 <= nx && nx <= N && 0 <= ny && ny <= M && board[nx][ny] == 'W') {
                dfs(nx, ny);
            }
        }
    }
    
    return;
}

void solve(void) {
    int res = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (board[i][j] == 'W') {
                dfs(i, j);
                res++;
            }
        }
    }
    
    cout << res << endl;
}

int main(void) {
#ifdef LOCAL
    freopen("input.dat", "r", stdin);
#endif

    
    cin >> N >> M;
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> board[i][j];
        }
    }
    
    solve();
    
    return 0;
}
