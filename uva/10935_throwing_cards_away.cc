/*!
 * \file 10935_throwing_cards_away.cc
 * \brief
 *
 * \author sabertazimi, <sabertazimi@gmail.com>
 * \version 1.0
 * \date 2016
 * \license MIT
 */

#include <iostream>
#include <queue>

using namespace std;

int main(void) {
    int n, i, tn;
    while (cin >> n) {
        if (!n) break;

        queue<int> q;

        for (i = 1; i <= n; i++) {
            q.push(i);
        }

        int flag = 0, ansflag = 0;
        cout << "Discarded cards:";

        while (!q.empty()) {
            tn = q.front();
            q.pop();

            if (q.size() == 0) break;

            if (flag == 0) {
                if (ansflag) cout << ",";
                ansflag = 1;
                cout << " " << tn;  // throw top away
            } else {
                q.push(tn);     // move second top to bottom
            }

            flag ^= 1;   // one time throw, one time push
        }

        cout << endl << "Remaining card: " << tn << endl;
    }

    return 0;
}




