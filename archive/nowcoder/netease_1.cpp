#include <iostream>
#include <set>

using namespace std;

int solve(int w, int x, int y, int z) {
    set <double> res;

    for (int i = w; i <= x ; i++) {
        double p = i;
        for (int j = y; j <= z; j++) {
            double q = j;
            double div = p/q;

            if (res.find(div) == res.end()) {
                res.insert(div);
            }
        }
    }

    return res.size();
}

int main(void) {
    int w, x, y, z;
    int res;

    cin >> w >> x >> y >> z;
    res = solve(w, x, y, z);
    cout << res << endl;

    return 0;
}
