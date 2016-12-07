/*!
 * \file stuck_maze.cc
 * \brief No.5
 *
 * \author sabertazimi, <sabertazimi@gmail.com>
 * \version 1.0
 * \date 2016
 * \license MIT
 */

#include <iostream>
#include <vector>

using namespace std;

class Node {
 public:
	int r;
	int c;

	 Node() {
		this->r = 0;
		this->c = 0;
	} Node(int rr, int cc) {
		this->r = rr;
		this->c = cc;
	}
};

///< map array
char map[55][55];

///< assistant array for dfs
bool marked1[55][55];
bool marked2[55][55];

int R, C;
Node S, T;

///< move array
int mov[][2] = {
	-1, 0,			// up
	1, 0,			// down
	0, -1,			// left
	0, 1			// right
};

int remov[][2] = {
	1, 0,
	-1, 0,
	0, 1,
	0, -1
};

bool canmov(char src, char dist, int *mov)
{
	if (dist == '#')
		return false;
	if (src == '+' || src == 'S' || src == 'T')
		return true;
	if (src == '|' && mov[1] == 0)
		return true;
	if (src == '-' && mov[0] == 0)
		return true;
	if (src == '.' && mov[0] == 1 && mov[1] == 0)
		return true;
	return false;
}

/// \param re reverse visit
void dfs(Node src, bool marked[][55], bool re)
{
	// up/down/left/right brute-force
	for (int i = 0; i < 4; i++) {
		Node tmp = src;
		tmp.r += mov[i][0];
		tmp.c += mov[i][1];

		if (!marked[tmp.r][tmp.c]) {
			if ((!re
			     && canmov(map[src.r][src.c], map[tmp.r][tmp.c],
				       mov[i]))
			    || (re
				&& canmov(map[tmp.r][tmp.c], map[src.r][src.c],
					  remov[i]))) {
				marked[tmp.r][tmp.c] = true;
				dfs(tmp, marked, re);
			}
		}
	}
}

int main(void)
{
	char c;
	cin >> R >> C;

	for (int i = 1; i <= R; i++) {
		for (int j = 1; j <= C; j++) {
			cin >> c;
			map[i][j] = c;

			if (c == 'S') {
				S.r = i;
				S.c = j;
			} else if (c == 'T') {
				T.r = i;
				T.c = j;
			}
		}
	}

	// reverse visit from T
	dfs(T, marked2, true);

	if (0 == marked2[S.r][S.c]) {
		cout << "I'm stuck!" << endl;
		return 0;
	}

	dfs(S, marked1, false);

	int cnt = 0;
	for (int i = 1; i <= R; i++) {
		for (int j = 1; j <= C; j++) {
			if (marked1[i][j] == 1 && marked2[i][j] == 0) {
				cnt++;
			}
		}
	}

	cout << cnt << endl;

	return 0;
}
