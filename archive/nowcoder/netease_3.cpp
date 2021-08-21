#include <iostream>
#include <vector>
#include <map>

using namespace std;

vector <int> res;

void solve(vector <int> & arr, int n) {
    map <int, int> mark;
    map <int, int> pos;

    for (int i = 0; i < n; i++) {
        int el = arr[i];
        mark[el] = i;
    }

    for (map<int, int>::iterator i = mark.begin(); i != mark.end(); i++) {
        pos[i->second] = i->first;
    }

    for (map<int, int>::iterator i = pos.begin(); i != pos.end(); i++) {
        res.push_back(i->second);
    }

}

int main(void) {
    int n;
    vector <int> arr;

    cin >> n;
    for (int i = 0; i < n; i++) {
        int el;
        cin >> el;
        arr.push_back(el);
    }

    solve(arr, n);

    for (int i = 0; i < (int)res.size() ;i++) {
        if (i < ((int)res.size()-1)) {
            cout << res[i] << " ";
        } else {
            cout << res[i] << endl;
        }
    }

    return 0;
}
