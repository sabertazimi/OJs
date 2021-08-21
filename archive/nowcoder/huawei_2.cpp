/*
* @Author: sabertazimi
* @Date:   2017-03-24 19:00:39
* @Last Modified by:   sabertazimi
* @Last Modified time: 2017-03-24 19:00:39
*/

/*
* @Author: sabertazimi
* @Date:   2017-03-24 19:00:30
* @Last Modified by:   sabertazimi
* @Last Modified time: 2017-03-24 19:00:30
*/

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <sstream>

using namespace std;

enum {
    LEFT,
    RIGHT,
    FRONT,
    BACK,
    TOP,
    BOTTOM
};

int res[6] = {1, 2, 3, 4, 5, 6};

void solve(string action) {
    int length = action.length();

    for (int i = 0; i < length; i++) {
        char ac = action[i];
        switch (ac) {
            case 'L': {
                int left = res[LEFT];
                res[LEFT] = res[TOP];
                res[TOP] = res[RIGHT];
                res[RIGHT] = res[BOTTOM];
                res[BOTTOM] = left;
                break;
            }
            case 'R': {
                int left = res[LEFT];
                res[LEFT] = res[BOTTOM];
                res[BOTTOM] = res[RIGHT];
                res[RIGHT] = res[TOP];
                res[TOP] = left;
                break;
            }
            case 'F': {
                int front = res[FRONT];
                res[FRONT] = res[TOP];
                res[TOP] = res[BACK];
                res[BACK] = res[BOTTOM];
                res[BOTTOM] = front;
                break;
            }
            case 'B': {
                int front = res[FRONT];
                res[FRONT] = res[BOTTOM];
                res[BOTTOM] = res[BACK];
                res[BACK] = res[TOP];
                res[TOP] = front;
                break;
            }
            case 'A': {
                int front = res[FRONT];
                res[FRONT] = res[LEFT];
                res[LEFT] = res[BACK];
                res[BACK] = res[RIGHT];
                res[RIGHT] = front;
                break;
            }
            case 'C': {
                int front = res[FRONT];
                res[FRONT] = res[RIGHT];
                res[RIGHT] = res[BACK];
                res[BACK] = res[LEFT];
                res[LEFT] = front;
                break;
            }
        }
    }
}

int main(void){
    string action;
    cin >> action;
    solve(action);

    for (int i = 0; i < 6; i++) {
        cout << res[i];
    }
    cout << endl;

    return 0;
}
