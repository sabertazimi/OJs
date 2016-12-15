/*!
 * \file 10391_compound_words.cc
 * \brief
 *
 * \author sabertazimi, <sabertazimi@gmail.com>
 * \version 1.0
 * \date 2016
 * \license MIT
 */

#include <iostream>
#include <set>

using namespace std;

int main(void) {
    string line, s1, s2;
    set<string> S;

    while (cin >> line) S.insert(line);

    for (set<string>::iterator i = S.begin(); i != S.end(); i++) {
        string str = *i;
        int len = str.length();

        for (int j = 0; j < len-1; j++) {
            s1 = str.substr(0, j+1);
            s2 = str.substr(j+1, len-j);

            if (S.find(s1) != S.end() && S.find(s2) != S.end()) {
                cout << str << endl;
                break;
            }
        }
    }

    return 0;
}

