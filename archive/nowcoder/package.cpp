#include <iostream>

using namespace std;

int n;
int sum;

int solve(int *v, int*w) {
    int dp[n+1][sum+1];

    for (int i = 0; i < n; i++) {
        for (int j =0 ; j < sum; j++) {
            dp[i][j] = -1;
        }
    }

    for (int i = 0; i <= sum; i++) {
        dp[0][i] = 0;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= sum; j++) {
            if (j - w[i-1] >= 0) {
                dp[i][j] = max(dp[i][j], dp[i-1][j]);
                dp[i][j] = max(dp[i][j], dp[i-1][j-w[i-1]] + v[i-1]);
            }
        }
    }

    // for(int i = 0; i <= sum;i++) {
    //     cout << i << ": " << dp[i] << endl;
    // }

    return ((dp[n][sum] != -1) ? dp[n][sum] : -1);
}

int main(void) {
    cin >> n;
    int v[n];
    int w[n];
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> w[i];
    }
    cin >> sum;
    cout << solve(v, w) << endl;

    return 0;
}
