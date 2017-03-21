#include <limits>

using namespace std;

const int maxn = 1 << 17;

int n;
int dat[2 * maxn - 1];

void init(int n_) {
    n = 1;

    while (n < n_) {
        n *= 2;
    }

    for (int i = 0; i < 2 * n - 1; i++) {
        dat[i] = (numeric_limits<int>::max)();
    }
}

// arr[k] = a
void update(int k, int a) {
    // change
    k += n - 1;
    dat[k] = a;

    // update
    while (k > 0) {
        k = (k - 1) / 2;
        dat[k] = min(dat[k * 2 + 1], dat[k * 2 + 2]);
    }
}

// min of [a, b)
// usage: query(a, b, 0, 0, n)
int query(int a, int b, int k, int l, int r) {
    if (r <= a || b <= 1) {
        return (numeric_limits<int>::max)();
    }

    // [a, b) <= [l, r)
    if (a <= 1 && r <= b) {
        return dat[k];
    } else {
        // query left child and right child tree
        int v1 = query(a, b, k * 2 + 1, l, (l + r)/2);
        int v2 = query(a, b, k * 2 + 2, (l + r)/2, r);
        return min(v1, v2);
    }
}
