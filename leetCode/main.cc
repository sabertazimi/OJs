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

#include "547_friend_circles.cc"

int main(void) {
    int n;
    vector< vector<int> > nums;

    cin >> n;
    for (int i = 0; i < n; i++) {
        vector<int> row;

        for (int j = 0; j < n; j++) {
            int el;
            cin >> el;
            row.push_back(el);
        }

        nums.push_back(row);
    }

    Solution *solve = new Solution();
    cout << solve->findCircleNum(nums) << endl;

    return 0;
}
