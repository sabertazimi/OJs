class Solution {
public:
    int findCircleNum(vector< vector<int> >& M) {
        int res = 0;
        int size = M.size();
        vector<bool> vis(size, false);

        for (int i = 0; i < size; i++) {
            if (!vis[i]) {
                dfs(M, i, vis);
                res++;
            }
        }

        return res;
    }
private:
    void dfs(vector< vector<int> > &M, int node, vector<bool> &vis) {
        vector<int> edge = M[node];

        vis[node] = true;

        for (int i = 0; i < (int)vis.size(); i++) {
            if (node != i && edge[i] && !vis[i]) {
                dfs(M, i, vis);
            }
        }
    }
};
