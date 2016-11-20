/*!
 * \file painting.cc
 * \brief No.2
 *
 * \author sabertazimi, <sabertazimi@gmail.com>
 * \version 1.0
 * \date 2016
 * \license MIT
 */

#include <iostream>

using namespace std;

static int board[102][102] = {0};

int main(void) {
    int n;
    int x1, y1, x2, y2;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x1 >> y1 >> x2 >> y2;

        for (int j = x1; j < x2; j++) {
            for (int k = y1; k < y2; k++) {
                board[j][k] = 1;
            }
        }
    }

    int sum = 0;
    for (int i = 1; i <= 102; i++) {
        for (int j = 1; j <= 102; j++) {
            if (board[i][j]) {
                sum++;
            }
        }
    }

    cout << sum << endl;

    return 0;
}