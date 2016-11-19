/*!
 * \file sudoku.cc
 * \brief
 *
 * \author sabertazimi, <sabertazimi@gmail.com>
 * \version 1.0
 * \date 2016
 * \license MIT
 */

#include <iostream>
#include <vector>

using namespace std;

const int N = 9;

/// \brief fill a empty pane with all possible numbers
void valid(const int a[N][N], int x, int y, vector<int>& validList) {
    // test pane with 1-9
	for(int m = 1; m <= N; m++) {
		bool flag = true;

		for(int j = 0; j < N; j++) {
            // line unique
			if(a[x][j] == m) {
				flag = false;
				break;
			}

            // raw unique
			if(a[j][y] == m) {
				flag = false;
				break;
			}

            // 9 panes unique
			int xx,yy;
			xx = (x/3)*3 + j/3;
			yy = (y/3)*3 + j%3;

			if(a[xx][yy] == m) {
				flag = false;
				break;
			}
		}

		if (flag) {
            validList.push_back(m);
        }
	}
}

void print(int a[N][N]) {
	for(int i = 0; i < N; i++) {
		for(int j = 0; j < N; j++) {
			cout << a[i][j] << " ";
		}

        cout << endl;
	}

	cout<<endl;
}

bool success = false;

bool solve(int a[N][N], int x, int y) {
    // search for empty pane to solve
	while(a[x][y] != 0) {
		if(++y == 9) {
			y = 0;

            // change line
			x++;

            // reach end
			if (x == 9) {
			    return true;
            }
		}
	}

	// if (b[x][y] != 0) {
    //      return false;
    // }

	vector<int> validList;

    // put all possible numbers into validList
	valid(a, x, y, validList);

	if (validList.size() == 0) {
        return false;
    }

	// brute-force algorithm
	for(int i = 0; i < (int)validList.size(); i++) {
		a[x][y] = validList[i];

        // recursion
		bool f = solve(a, x, y);

		if (f) {
            return true;
        } else {
            a[x][y] = 0;
        }
	}

	return false;
}

int main(void) {
	int a[N][N] = {
		8, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 3, 6, 0, 0, 0, 0, 0,
		0, 7, 0, 0, 9, 0, 2, 0, 0,
		0, 5, 0, 0, 0, 7, 0, 0, 0,
		0, 0, 0, 0, 4, 5, 7, 0, 0,
		0, 0, 0, 1, 0, 0, 0, 3, 0,
		0, 0, 1, 0, 0, 0, 0, 6, 8,
		0, 0, 8, 5, 0, 0, 0, 1, 0,
		0, 9, 0, 0, 0, 0, 4, 0, 0
	};

	solve(a,0,0);
	print(a);

	return 0;
}
