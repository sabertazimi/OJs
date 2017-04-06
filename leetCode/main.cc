#include <cstdio>
#include <cstring>
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <algorithm>
#include <limits>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

#include "102_binary_tree_level_order_traversal.cc"

int main(void) {
    int n;
    vector<int> preorder;
    vector<int> inorder;

    cin >> n;
    for (int i = 0; i < n; i++) {
        int el;
        cin >> el;
        preorder.push_back(el);
    }
    for (int i = 0; i < n; i++) {
        int el;
        cin >> el;
        inorder.push_back(el);
    }

    Solution *solve = new Solution();
    TreeNode *root = solve->buildTree(preorder, inorder);
    solve->show(root);

    return 0;
}
