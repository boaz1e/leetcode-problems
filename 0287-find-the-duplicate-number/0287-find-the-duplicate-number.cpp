class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int, int> mp;
        int retNum;
        for(auto x:nums)
            mp[x]++;
        for(auto i:mp)
            if(i.second>1)
                retNum=i.first;
        return retNum;
    }
};