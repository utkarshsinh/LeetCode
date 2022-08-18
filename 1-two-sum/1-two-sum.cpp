class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int numtofind;
        vector<int> result;
        unordered_map<int,int> hash;
       
        for(int i=0;i<nums.size();i++)
        {
        numtofind = target - nums[i];
            if(hash.find(numtofind)!= hash.end())
            {
               result.push_back(i);
                result.push_back(hash[numtofind]);
                return result;
            }
        hash[nums[i]] =i;
            
        }
        return result;
    }
};