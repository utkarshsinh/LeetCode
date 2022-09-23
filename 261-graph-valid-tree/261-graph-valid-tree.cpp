class UnionFind {
public:
    UnionFind(int sz) : root(sz) {
        for (int i = 0; i < sz; i++) {
            root[i] = i;
        }
    }

    int find(int x) {
        while (x != root[x]) {
            x = root[x];
        }
        return x;
    }

    bool unionSet(int x, int y) {
        int rootX = find(x);
        int rootY = find(y);
        if (rootX == rootY) {
            return false;
        }
        root[rootX] = rootY;
        return true;
    }
private:
    vector<int> root;
};


class Solution {
public:
    bool validTree(int n, vector<vector<int>>& edges) {
        if(edges.size()!= n-1) return false;
        UnionFind uf(n);
        for(auto &edge : edges)
        {
            int a = edge[0];
            int b = edge[1];
            if(!uf.unionSet(a,b)) return false;
        }
        return true;
    }
};