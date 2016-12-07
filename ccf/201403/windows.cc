/*!
 * \file windows.cc
 * \brief No2
 *
 * \author sabertazimi, <sabertazimi@gmail.com>
 * \version 1.0
 * \date 2016
 * \license MIT
 */

#include <iostream>
#include <vector>

using namespace std;

static int cnt = 0;

class wds {
 public:
	int lx, ly;
	int rx, ry;
	int no;

	 wds(void) {
		lx = ly = rx = ry = 0;
		cnt = 0;
	} wds(int lx, int ly, int rx, int ry, int cnt) {
		this->lx = lx;
		this->ly = ly;
		this->rx = rx;
		this->ry = ry;
		this->no = cnt;
	}
};

int main(void)
{
	int n, cl;
	cin >> n >> cl;

	vector < wds * >arr(n);
	int lx, ly, rx, ry;
	for (int i = 0; i < n; i++) {
		cin >> lx >> ly >> rx >> ry;
		arr[i] = new wds(lx, ly, rx, ry, ++cnt);
	}

	int cx, cy, click;
	for (int i = 0; i < cl; i++) {
		cin >> cx >> cy;

		click = 0;

		for (int j = n - 1; j > -1; j--) {
			if (cx >= arr[j]->lx && cx <= arr[j]->rx
			    && cy >= arr[j]->ly && cy <= arr[j]->ry) {
				cout << arr[j]->no << endl;
				swap(arr[n - 1], arr[j]);
				click = 1;
				break;
			}
		}

		if (click == 0) {
			cout << "IGNORED" << endl;
		}
	}

	return 0;
}
