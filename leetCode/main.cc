#include <cstdio>
#include <cstring>
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <algorithm>
#include <limits>

using namespace std;

#include "85_maximal_rectangle.cc"

int main(void) {
    int m, n;
    vector< vector<char> > matrix;

    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        vector<char> row;

        for (int j = 0; j < n; j++) {
            char el;
            cin >> el;
            row.push_back(el);
        }

        matrix.push_back(row);
    }

    Solution *solve = new Solution();
    cout << solve->maximalRectangle(matrix);

    return 0;
}
