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

#include "34_search_for_a_range.cc"

int main(void) {
    int target;
    int n;
    vector<int> nums;

    cin >> target;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int el;
        cin >> el;
        nums.push_back(el);
    }

    Solution *solve = new Solution();
    vector<int> res;
    res = solve->searchRange(nums, target);
    cout << res[0] << endl;
    cout << res[1] << endl;

    return 0;
}
