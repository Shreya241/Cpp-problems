class Solution {
public:
    void filld(vector<int>& parent, int i, vector<int>& depth) {
        if (depth[i] != -1)
            return;

        if (parent[i] == -1) {
            depth[i] = 1;
            return;
        }

        if (depth[parent[i]] == -1)
            filld(parent, parent[i], depth);

        depth[i] = depth[parent[i]] + 1;
    }

    long double density(int n, vector<int>& par) {
        vector<int> depth(n, -1);
        for (int i = 0; i < n; i++) {
            filld(par, i, depth);
        }

        int ht = depth[0];
        for (int i = 1; i < n; i++) {
            if (ht < depth[i]) {
                ht = depth[i];
            }
        }

        long double density = (long double)n / (long double)ht;
        return density;
    }
};
