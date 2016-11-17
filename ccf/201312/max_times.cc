/*!
 * \file max_times.cc
 * \brief No.1 of 2013-12 ccf
 *
 * \author sabertazimi, <sabertazimi@gmail.com>
 * \version 1.0
 * \date 2016
 * \license MIT
 */

#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    vector<int> arr(n);
    map<int, int> times;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (times.find(arr[i]) == times.end()) {
            // first insert
            times[arr[i]] = 1;
        } else {
            times[arr[i]]++;
        }
    }

    int max = 0;
    int num = 0;
    for (map<int, int>::iterator it = times.begin(); it != times.end(); it++) {
        if (it->second > max) {
            num = it->first;
            max = it->second;
        }
    }

    cout << num;

    return 0;
}
