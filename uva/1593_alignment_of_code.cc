/*!
 * \file 1593_alignment_of_code.cc
 * \brief
 *
 * \author sabertazimi, <sabertazimi@gmail.com>
 * \version 1.0
 * \date 2016
 * \license MIT
 */

#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
    string line;
    vector < vector<string> > ret;
    int mx[256] = {};

    while (getline(cin, line)) {
        stringstream sin(line);
        vector <string> v;
        string x;

        while (sin >> x) {
            v.push_back(x);

            // get align distance
            // max value in last-column length and current-column length
            mx[v.size()] = max(mx[v.size()], (int)x.length());
        }

        ret.push_back(v);
    }

    for (int i = 1; i < 256; i++) {
        // get space added
        mx[i] += mx[i-1] + 1;
    }

    for (int i = 0; i < (int)ret.size(); i++) {
        vector <string> &v = ret[i];

        // pre character position
        int pos = 0;

        for (int j = 0; j < (int)v.size(); i++) {
            while (pos < mx[j]) {
                cout << ' ';
                pos++;
            }

            cout << v[j];
            pos += v[j].length();
        }

        cout << endl;
    }

    return 0;
}