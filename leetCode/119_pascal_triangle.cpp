class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> graph;
        graph.resize(rowIndex + 1);

        for (int i = 0; i < rowIndex + 1; i++) {
            graph[i].resize(i + 1);

            int start = 0;
            int end = graph[i].size() - 1;
            
            graph[i][start] = 1;
            graph[i][end] = 1;

            for (int j = start + 1; j < end; j++) {
                graph[i][j] = graph[i-1][j-1] + graph[i-1][j];
            }
        }

        return graph[rowIndex];
    }
};
