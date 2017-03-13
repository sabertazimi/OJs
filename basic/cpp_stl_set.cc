/*!
 * \file cpp_stl_set_map_binarysearchtree.cc
 * \brief
 *
 * \author sabertazimi, <sabertazimi@gmail.com>
 * \version 1.0
 * \date 2017
 * \license MIT
 */

#include <iostream>
#include <set>
#include <map>
#include <string>

using namespace std;

int main(void) {
    set<int> s;

    s.insert(1);
    s.insert(3);
    s.insert(5);

    set<int>::iterator ite;

    // found
    ite = s.find(1);
    if (ite == s.end()) cout << "not found" << endl;
    else cout << "found" << endl;

    // not found
    ite = s.find(2);
    if (ite == s.end()) cout << "not found" << endl;
    else cout << "found" << endl;

    // not found
    s.erase(3);
    if (s.count(3) != 0) cout << "found" << endl;
    else cout << "not found" << endl;

    for (ite = s.begin(); ite != s.end(); ite++) {
        cout << *ite << endl;
    }

    return 0;
}

