class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> hash;
        vector<int> result;
        for(int i=0;i<numbers.size() ;i++)
        {
            int numtofind = target - numbers[i];
            if(hash.find(numtofind)!= hash.end())
            {
                result.push_back(i+1);
                result.push_back(hash[numtofind]+1);
                sort(result.begin(),result.end());
                return result;
            }
            hash[numbers[i]]=i;
        }
        return result;
    }
};