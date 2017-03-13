/*!
 * \file cpp_stl_priority_queue.cc
 * \brief
 *
 * \author sabertazimi, <sabertazimi@gmail.com>
 * \version 1.0
 * \date 2017
 * \license MIT
 */

#include <iostream>
#include <queue>
using namespace std;

struct Node{
    int x, y;
};

bool operator<(Node a, Node b) {
    if (a.x == b.x) {
        return a.y > b.y;
    }

    return a.x > b.x;
}

struct Mode {
    int x, y;
};

struct cmp{
    bool operator()(Mode a, Mode b) {
        if (a.x == b.x) {
            return a.y>b.y;
        }

        return a.x>b.x;
    }
};

int main(void) {
    priority_queue < int > maxque;
    priority_queue < int, vector<int>, less<int> > maxque2;
    priority_queue < int, vector<int>, greater<int> > minque;
    priority_queue < Node > nodeque;
    priority_queue < Mode, vector<Mode>, cmp > modeque;

    maxque.push(3);
    maxque.push(5);
    maxque.push(1);

    while (!maxque.empty()) {
        cout << maxque.top() << endl;
        maxque.pop();
    }

    return 0;
}

