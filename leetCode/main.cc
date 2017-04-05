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

#include "231_power_of_two.cc"

int main(void) {
    int n;
    // vector<int> nums;

    cin >> n;

    // for (int i = 0; i < n; i++) {
    //     int el;
    //     cin >> el;
    //     nums.push_back(el);
    // }

    Solution *solve = new Solution();
    cout << solve->isPowerOfTwo(n) << endl;

    return 0;
}
