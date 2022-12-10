class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> ans;
        for(auto i:nums)
            ans[i]++;
        for(auto z:ans)
            if(z.second==1)
                return z.first;
        return -1;
    }
};