class Solution {
public:
     int find(int a, vector<int> &parent)
        {
             if(parent[a] == -1) return a;
             return find(parent[a], parent);
        }
     void _union(int x, int y, vector<int> &parent)
        {
            int p = find(x, parent);
            int q = find(y, parent);
            if(p!=q) parent[q]=p;
        }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int count=0;
        int n = isConnected.size();
        vector<int> parent(n,-1);
       
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(isConnected[i][j] ==1 and i!=j)
                {
                    _union(i,j, parent);
                }
            }
        }
       for(int i=0; i<parent.size(); i++)
       {
           if(parent[i]==-1) count++;
       }
      return count;  
    }
};