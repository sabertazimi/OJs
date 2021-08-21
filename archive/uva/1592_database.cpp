/*!
 * \file 1592_Database.cc
 * \brief
 *
 * \author sabertazimi, <sabertazimi@gmail.com>
 * \version 1.0
 * \date 2016
 * \license MIT
 */

#include <cstdio>
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
#include <map>

using namespace std;

#define LOCAL
#undef LOCAL

typedef pair<int,int> PII;

const int maxr = 10000 + 5;
const int maxc = 10 + 5;

int m, n, db[maxr][maxc];

int cnt;
map <string, int> id;
/// \brief index for string
int ID(const string &str) {
    if (0 == id.count(str)) {
        id[str] = ++cnt;
        return cnt;
    } else {
        return id[str];
    }
}

void find(void) {
    for(int c1 = 0; c1 < m; c1++) {
        for(int c2 = c1+1; c2 < m; c2++) {
            map<PII, int> d;

            for(int i = 0; i < n; i++) {
                PII p = make_pair(db[i][c1], db[i][c2]);

                if (d.count(p)) {
                    cout << "NO" << endl;
                    cout << (d[p]+1) << (i+1) << endl;
                    cout << (c1+1) << (c2+1) << endl;
                    return;
                }

                d[p] = i;
            }
        }
    }

    cout << "YES" << endl;
}

int main(void) {
#ifdef LOCAL
    freopen("input.dat", "r", stdin);
#endif

    string s;

    while(getline(cin, s)) {
        stringstream ss(s);
        if(!(ss >> n >> m)) break;

        cnt = 0;
        id.clear();

        // read data from a table
        for(int i = 0; i < n; i++) {
            getline(cin, s);
            int lastpos = -1;

            for(int j = 0; j < m; j++) {
                // start from ',', end to ','
                int p = s.find(',', lastpos+1);
                if(p == (int)string::npos) p = s.length();

                // insert a new record
                db[i][j] = ID(s.substr(lastpos+1, p - lastpos - 1));

                // update last position
                lastpos = p;
            }
        }
        find();
    }

    return 0;
}
