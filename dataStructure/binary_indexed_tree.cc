// node stand for sum of range

// i & -i: find last 1 bit
// i -= i & -i => i = i & (i - 1)

const int maxn = 1 << 17;

int n;
int bit[maxn+1];

// sum of arr[0] to arr[i]
int sum(int i) {
    int s = 0;

    while (i > 0) {
        s += bit[i];
        i -= i & -i;
    }
}

// arr[i] += x
// update all node
void add(int i, int x) {
    while (i <= n) {
        bit[i] += x;
        i += i & -i;
    }
}
