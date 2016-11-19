/*!
 * \file inverse_number.cc
 * \brief No.1
 *
 * \author sabertazimi, <sabertazimi@gmail.com>
 * \version 1.0
 * \date 2016
 * \license MIT
 */

#include <iostream>
#include <map>
#include <cmath>

using namespace std;

int main(void) {
    int n;
    cin >> n;

    int num;
    int pairs = 0;
    map<int, int> mp;

    for (int i = 0; i < n; i++) {
        cin >> num;

        if (mp.find(abs(num)) == mp.end()) {
            mp[abs(num)] = 1;
        } else {
            pairs++;
        }
    }

    cout << pairs << endl;

    return 0;
}
