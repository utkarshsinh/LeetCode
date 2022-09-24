class Solution {
public:
    int find(vector<int> &representative, int vertex) {
        if (vertex == representative[vertex]) {
            return vertex;
        }
        
        return representative[vertex] = find(representative, representative[vertex]);
    }
    
    int combine(vector<int> &representative, int vertex1, int vertex2) {
        vertex1 = find(representative, vertex1);
        vertex2 = find(representative, vertex2);
        
        if (vertex1 == vertex2) {
            return 0;
        } else {
           
                representative[vertex2] = vertex1;
          
            return 1;
        }
    }

    int countComponents(int n, vector<vector<int>>& edges) {
        vector<int> representative(n), size(n);
        
        for (int i = 0; i < n; i++) {
            representative[i] = i;
        }
        
        int components = n;
        for(auto edge: edges)
        {
            components -= combine(representative, edge[0], edge[1]);
        }
        // for (int i = 0; i < edges.size(); i++) {
        //     components -= combine(representative, edges[i][0], edges[i][1]);
        // }

        return components;
    }
};