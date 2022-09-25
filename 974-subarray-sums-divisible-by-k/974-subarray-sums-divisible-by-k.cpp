class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        vector<int> count(k);
        int sum=0;
        for( auto i: nums)
        {
            sum = sum + (i%k +k)%k;
            count[sum%k]++;
        }
        int result = count[0];
        for( auto j: count)
        {
            result = result + (j*(j-1))/2;
        }
        return result;
    }
};