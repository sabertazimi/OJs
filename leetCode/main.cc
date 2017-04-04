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

#include "35_search_insert_position.cc"

int main(void) {
    int target;
    int n;
    vector<int> nums;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int el;
        cin >> el;
        nums.push_back(el);
    }

    cin >> target;

    Solution *solve = new Solution();
    cout << solve->searchInsert(nums, target) << endl;

    return 0;
}
