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

#include "84_largest_rectangle_in_histogram.cc"

int main(void) {
    int n;
    vector<int> heights;

    cin >> n;
    for (int i = 0; i < n; i++) {
        int el;
        cin >> el;
        heights.push_back(el);
    }

    Solution *solve = new Solution();
    cout << solve->largestRectangleArea(heights) << endl;

    return 0;
}
