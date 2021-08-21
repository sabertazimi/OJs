/*!
 * \file router.cc
 * \brief No.4
 *
 * \author sabertazimi, <sabertazimi@gmail.com>
 * \version 1.0
 * \date 2016
 * \license MIT
 */

#include <iostream>
#include <string>
#include <cstring>

#undef LOCAL

using namespace std;

struct point {
	int x, y;
};

int n, m, kk, r;

int edge[205][205];
point p[205];
int cnt[205][205];

void print(void)
{
	cout << "edge: " << endl;

	for (int i = 1; i <= n + m; i++) {
		for (int j = 1; j <= n + m; j++) {
			cout << edge[i][j] << " ";
		}
		cout << endl;
	}

	cout << "cnt: " << endl;

	for (int i = 1; i <= n + m; i++) {
		for (int j = 1; j <= n + m; j++) {
			cout << cnt[i][j] << " ";
		}
		cout << endl;
	}
}

int main(void)
{
	// for debug only
#ifdef LOCAL
	freopen("data.in", "r", stdin);
	// freopen("data.out","w+",stdout);
#endif

	while (cin >> n >> m >> kk >> r) {
		// initialization
		memset(edge, -1, sizeof(edge));
		memset(cnt, 0, sizeof(cnt));

		// get router layout
		for (int i = 0; i < n + m; i++) {
			cin >> p[i].x >> p[i].y;
		}

		for (int i = 0; i < n + m - 1; i++) {
			for (int j = i + 1; j < n + m; j++) {
				if ((long long)(p[i].x - p[j].x) * (p[i].x -
								    p[j].x) +
				    (long long)(p[i].y - p[j].y) * (p[i].y -
								    p[j].y) <=
				    (long long)(r) * r) {
					// connected node 
					edge[i + 1][j + 1] =
					    edge[j + 1][i + 1] = 1;
				}
			}
		}

		for (int i = 1; i <= n + m; i++)
			edge[i][i] = 0;

		// redundant routers
		for (int i = n + 1; i <= n + m; i++)
			cnt[i][i] = 1;

		for (int k = 1; k <= n + m; k++) {
			for (int i = 1; i <= n + m; i++) {
				for (int j = 1; j <= n + m; j++) {
					if (edge[i][k] == -1
					    || edge[k][j] == -1) {
						continue;
					}

					if (edge[i][j] == -1
					    || edge[i][k] + edge[k][j] <
					    edge[i][j]) {
						if (k > n) {
							// limit to number of added routers
							if (cnt[i][k] +
							    cnt[k][j] - 1 <=
							    kk) {
								edge[i][j] =
								    edge[i][k] +
								    edge[k][j];
								cnt[i][j] =
								    cnt[i][k] +
								    cnt[k][j] -
								    1;
							}
						} else {
							if (cnt[i][k] +
							    cnt[k][j] <= kk) {
								edge[i][j] =
								    edge[i][k] +
								    edge[k][j];
								cnt[i][j] =
								    cnt[i][k] +
								    cnt[k][j];
							}
						}
					}
				}
			}
		}

		cout << edge[1][2] - 1 << endl;
	}

	return 0;
}
