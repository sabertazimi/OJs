/*!
 * \file maze_game.cc
 * \brief No.4
 *
 * \author sabertazimi, <sabertazimi@gmail.com>
 * \version 1.0
 * \date 2016
 * \license MIT
 */

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// 危险时间
struct TM {
	int s, v;
	 TM(int ss = 0, int vv = 0) {
		s = ss, v = vv;
}};

struct S {
	int x, y, step;
	 S(int xx = 0, int yy = 0, int ss = 0) {
		x = xx, y = yy, step = ss;
}};

int N, M, T;
int mp[102][102];		// 如果为0，表示该点不危险；大于0，其值为tms中该点危险时间的索引
bool marked[300][102][102];	// 标记某时刻某点是不是已经被处理， 没有这个标记的话极易超时
vector < TM > tms;		// 保存危险点的危险时间， 索引保存在mp中
int _go[][2] = {
	0, 1,
	1, 0,
	0, -1,
	-1, 0
};

int bfs()
{
	queue < S > que;
	que.push(S(1, 1, 0));

	while (!que.empty()) {
		S s = que.front();
		que.pop();

		if (s.x == N && s.y == M) {
			return s.step;
		}

		for (int i = 0; i < 4; i++) {
			S tmp = s;
			tmp.x += _go[i][0];
			tmp.y += _go[i][1];
			tmp.step++;

			// 越界
			if (tmp.x <= 0 || tmp.x > N || tmp.y <= 0 || tmp.y > M) {
				continue;
			}
			// 危险或者超步数
			int index = mp[tmp.x][tmp.y];
			if (tmp.step >= 300 || index > 0
			    && tmp.step >= tms[index].s
			    && tmp.step <= tms[index].v) {
				continue;
			}
			// 当前时刻未被标记
			if (!marked[tmp.step][tmp.x][tmp.y]) {
				que.push(tmp);
				marked[tmp.step][tmp.x][tmp.y] = true;
			}
		}
	}
	return -1;
}

int main(void)
{
	int r, c, a, b;
	cin >> N >> M >> T;
	int count = 1;

	tms.push_back(TM());

	for (int i = 0; i < T; i++) {
		cin >> r >> c >> a >> b;
		tms.push_back(TM(a, b));
		mp[r][c] = count;
		count++;
	}

	cout << bfs() << endl;
	return 0;
}
