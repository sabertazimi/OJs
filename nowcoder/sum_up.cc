#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <limits>

using namespace std;

int sum;
vector <int> values;

int solve(void) {
    int n = values.size();
    int dp[sum+10];
    int int_max = (numeric_limits<int>::max)();
    fill(dp, dp+sum+10, int_max);

    dp[0] = 0;

    for (int i = 1; i <= sum; i++) {
        for (int j = 0; j < n; j++) {
            if (i - values[j] >= 0 && dp[i-values[j]] != int_max) {
                dp[i] = min(dp[i], dp[i-values[j]] + 1);
            }
        }
    }

    // for(int i = 0; i <= sum;i++) {
    //     cout << i << ": " << dp[i] << endl;
    // }

    return ((dp[sum] != int_max) ? dp[sum] : -1);
}

int main(void) {
    string s;
    string item;
    stringstream ss;
    cin >> s;
    cin >> sum;
    ss.str(s);

    while (getline(ss, item, ',')) {
        stringstream sss;
        int n;
        sss << item;
        sss >> n;
        values.push_back(n);
    }

    cout << solve() << endl;

    return 0;
}
