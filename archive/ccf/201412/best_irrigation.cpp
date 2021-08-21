/*!
 * \file best_irrigation.cc
 * \brief No.4
 *
 * \author sabertazimi, <sabertazimi@gmail.com>
 * \version 1.0
 * \date 2016
 * \license MIT
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Edge {
 public:
	int x;
	int y;
	int value;

	 Edge(int x = 0, int y = 0, int value = 0) {
		this->x = x;
		this->y = y;
		this->value = value;
}};

int n;				///< node number
int m;				///< edge number

int id[1001];			///< parent array
int sz[1001] = { 1 };		///< children number array

vector < Edge > edges;

bool cmp(const Edge & a, const Edge & b)
{
	return (a.value < b.value);
}

int tFind(int p)
{
	if (id[p] == p) {
		// root found
		return p;
	} else {
		// path compression
		return id[p] = tFind(id[p]);
	}
}

bool tUnion(int x, int y)
{
	x = tFind(x);
	y = tFind(y);

	if (x == y) {
		return false;
	} else if (sz[x] < sz[y]) {
		id[x] = y;
		sz[y] += sz[x];
	} else {
		id[y] = x;
		sz[x] += sz[y];
	}

	return true;
}

int kruskal(void)
{
	int res = 0, cnt = 0;

	for (int i = 0; i < m; i++) {
		if (tUnion(edges[i].x, edges[i].y)) {
			// add a new node into tree
			res += edges[i].value;
			cnt++;

			if (cnt == n - 1) {
				break;
			}
		}
	}

	return res;
}

int main(void)
{
	int x, y, value;

	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		cin >> x >> y >> value;
		edges.push_back(Edge(x, y, value));
	}

	// split all nodes into sinlge trees with only 1 node
	for (int i = 0; i < n; i++) {
		id[i] = i;
	}

	sort(edges.begin(), edges.end(), cmp);

	cout << kruskal() << endl;

	return 0;
}
