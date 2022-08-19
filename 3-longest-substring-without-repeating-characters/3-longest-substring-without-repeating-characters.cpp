class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,res=0;
        vector<int> lastindex(256,INT_MIN);
        for(int j=0;j<s.size();j++)
        {
            i=max(i,lastindex[s[j]]+1);
                res=max(res,j-i+1);
            lastindex[s[j]]=j;
        }
        return res;
    }
};