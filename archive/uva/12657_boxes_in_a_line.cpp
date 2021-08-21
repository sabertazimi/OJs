#include <iostream>
#include <algorithm>

const int maxn = 100000+5;
int n, left[maxn], right[maxn];

inline void link(int L, int R) {
    right[L] = R;
    left[R] = L;
}

int main(void) {
    int m, kase = 1;

    while (std::cin >> n >> m) {
        for (int i = 1; i <= n; i++) {
            left[i] = i - 1;
            right[i] = (i+1) % (n+1);
        }
        right[0] = 1;
        left[0] = n;

        int op, X, Y, inv = 0;

        while (m--) {
            std::cin >> op;

            if (op == 4) {
                inv = !inv;
            } else {
                std::cin >> X >> Y;

                if (op == 3 && right[Y] == X) {
                    std::swap(X, Y);
                }

                if (op != 3 && inv) {
                    op = 3 - op;
                }

                if (op == 1 && X == left[Y]) {
                    continue;
                }

                if (op == 2 && X == right[Y]) {
                    continue;
                }

                int LX = left[X], RX = right[X];
                int LY = left[Y], RY = right[Y];

                if (op == 1) {
                    link(LX, RX);
                    link(LY, X);
                    link(X, Y);
                } else if (op == 2) {
                    link(LX, RX);
                    link(Y, X);
                    link(X, RY);
                } else if (op == 3) {
                    if (right[X] == Y) {
                        link(LX, Y);
                        link(Y, X);
                        link(X, RY);
                    } else {
                        link(LX, Y);
                        link(Y, RX);
                        link(LY, X);
                        link(X, RY);
                    }
                }
            }
        }

        int b = 0;
        long long ans = 0;
        for (int i = 1; i <= n; i++) {
            b = right[b];

            if (i % 2 == 1) {
                ans += b;
            }
        }

        if (inv && n % 2 == 0) {
            ans = (long long)n * (n+1) / 2 - ans;
        }

        std::cout << "Case " << kase << ": " << ans << std::endl;

        kase++;
    }
}
