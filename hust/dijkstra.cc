/*!
 * \file dijkstra.cc
 * \brief Hust Algorithm Lab
 *
 * \author sabertazimi, <sabertazimi@gmail.com>
 * \version 1.0
 * \date 2016
 * \license MIT
 */

#include <cstdlib>
#include <climits>
#include <iostream>
#include <vector>
#include <set>

#define LOCAL
// #undef LOCAL

#ifdef LOCAL
#include <fstream>
#endif

using namespace std;

#ifdef LOCAL
ifstream fin("data.in");
// ofstream fout("data.out");
streambuf *cinbackup;
streambuf *coutbackup;
#endif

class Node {
public:
    int dist;
    int parent;

    Node(int dist = INT_MAX, int parent = INT_MAX) {
        this->dist = dist;
        this->parent = parent;
    }
};

/// \brief implementation of dijkstra algorithm
///
/// start node: No.0
///
/// \param nodes nodes array
/// \param edges map matrix
/// \return void
void dijkstra(vector<Node *> &nodes, int **edges) {
    int n = nodes.size();
    set<int> S;
    S.insert(0);

    while ((int)S.size() < n) {
        int minDist = INT_MAX;
        int minNode = 0;

        // find node closest to S set
        for (int i = 0; i < n; i++) {
            // node i is not in S set
            if (S.find(i) == S.end() && minDist > nodes[i]->dist) {
                minDist = nodes[i]->dist;
                minNode = i;
            }
        }

        // insert minNode into S set
        S.insert(minNode);

        for (int i = 0; i < n; i++) {
            // relax: update distance between nodes not in S set to S set after inserting minNode
            if (S.find(i) == S.end() && nodes[i]->dist > nodes[minNode]->dist + edges[minNode][i]) {
                nodes[i]->dist = nodes[minNode]->dist + edges[minNode][i];
                nodes[i]->parent = minNode;
            }
        }
    }
}

int main(void) {
#ifdef LOCAL
    cinbackup = cin.rdbuf(fin.rdbuf());
    // coutbackup = cout.rdbuf(fout.rdbuf());
#endif

    int r;      ///< number of rounds
    cin >> r;

    for (int i = 0; i < r; i++) {
        int n;  ///< number of nodes
        int m;  ///< number of edges
        cin >> n >> m;

        vector<Node *> nodes(n);
        int **edges = (int **)malloc(sizeof(int *) * n);

        // initialize map matrix, set distance of every edge to INT_MAX(infinite)
        for (int j = 0; j < n; j++) {
            edges[j] = (int *)malloc(sizeof(int) * n);

            for (int k = 0; k < n; k++) {
                edges[j][k] = INT_MAX;
            }
        }

        // get map matrix from input
        for (int j = 0; j < m; j++) {
            int s, t, d;
            cin >> s >> t >> d;
            edges[s][t] = d;
        }

        // set distance of self node to 0
        for (int j = 0; j < n; j++) {
            edges[j][j] = 0;
        }

        // initialize dist and parent information of nodes, by map matrix
        for (int j = 0; j < n; j++) {
            if (edges[0][j] != INT_MAX) {
                nodes[j] = new Node(edges[0][j], 0);
            } else {
                nodes[j] = new Node(INT_MAX, 0);
            }
        }

        // invoke dijkstra algorithm
        dijkstra(nodes, edges);

        // print shortest paths
        cout << "round: " << i + 1 << endl;

        cout << "map: " << endl;
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                if (edges[j][k] != INT_MAX) {
                    cout << edges[j][k] << "\t";
                } else {
                    cout << "x\t";
                }
            }
            cout << endl;
        }

        cout << "shortest paths:" << endl;
        for (int j = 1; j < n; j++) {
            // put path into path vector, and calculate distance
            int dist = 0;
            int parent = j;
            vector<int> path;

            while (parent != 0) {
                path.insert(path.begin(), parent);
                parent = nodes[parent]->parent;
                dist += nodes[parent]->dist;
            }

            // print shortest path
            cout << "0 - " << j << ": 0";
            for (int k = 0; k < (int)path.size(); k++) {
                cout << "-" << path[k];
            }
            cout << " " << dist << endl;
        }

        // free heap memory
        for (int j = 0; j < n; j++) {
            delete nodes[j];
        }

        // free heap memory;
        for (int j = 0; j < n; j++) {
            delete edges[j];
        }
        delete edges;
    }

#ifdef LOCAL
    cin.rdbuf(cinbackup);
    // cout.rdbuf(coutbackup);
    fin.close();
    // fout.close();
#endif

    return 0;
}
