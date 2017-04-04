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

#include "240_search_a_2d_matrix_2.cc"

int main(void) {
    int target;
    int m, n;
    vector< vector<int> > matrix;

    cin >> target;
    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        vector<int> row;

        for (int j = 0; j < n; j++) {
            int el;
            cin >> el;
            row.push_back(el);
        }

        matrix.push_back(row);
    }

    Solution *solve = new Solution();
    cout << solve->searchMatrix(matrix, target);

    return 0;
}
