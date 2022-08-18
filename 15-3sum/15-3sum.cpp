class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>> result;
        
        sort(nums.begin(), nums.end());
        
        for( int i=0; i<nums.size(); i++)
        {
            if(i > 0 && nums[i]==nums[i-1])
                continue;
            int l = i+1;
            int h = nums.size()-1;
            while(l<h)
            {
            if(nums[l] + nums[h] + nums[i] == 0)
            {
                result.push_back(vector<int>{nums[i],nums[l],nums[h]});
                 while (l<h && nums[l] == nums[l+1]) 
                        l++;
                    // to handle duplicates
                 while (l<h && nums[h] == nums[h-1]) 
                        h--;
                l++;
                h--;
            }
            else if(nums[l] + nums[h] + nums[i] < 0)
            {
                l++;
            }
            else h--;
            }
        }
        return result;
    }
};