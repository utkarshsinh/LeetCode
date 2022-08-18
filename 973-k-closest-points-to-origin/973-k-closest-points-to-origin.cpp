class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
          multimap<int, int> map;
          for (int i = 0; i < points.size(); ++i)
                map.insert({ points[i][0] * points[i][0] + points[i][1] * points[i][1], i });
          vector<vector<int>> res;
          for (auto it = map.begin(); k > 0; it++, k--) 
              res.push_back(points[it->second]);
          return res;
    }
};