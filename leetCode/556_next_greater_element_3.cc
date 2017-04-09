class Solution {
public:
    int nextGreaterElement(int n) {
        // search start from tail for strn[i] < strn[i+1]
        // search start from tail for strn[i] < strn[j]
        // swap(strn[i], strn[j])
        // reverse(strn.begin() + i + 1, strn.end());
        // e.g 2319482 => 2319 48 2 (find) => 2319 84 2 (swap) => 2319 8 24 (reverse) => 2319824
        // e.g 2319485432 => 2319 48 5432 (find) => 2319 58 4432 (swap) => 2319 5 23448 (reverse) => 2319523448
        auto digits = to_string(n);
        next_permutation(begin(digits), end(digits));
        auto res = stoll(digits);
        return (res > INT_MAX || res <= n) ? -1 : res;
    }
};
