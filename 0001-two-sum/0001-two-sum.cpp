class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        int n = nums.size();
        vector<int> ans;

        for(int i=0;i<n;i++)
        {
            int numToFind = target - nums[i];
            
            if(mp.find(numToFind) != mp.end())
            {
                ans.push_back(mp[numToFind]);
                ans.push_back(i);
                return ans;
            }
            mp[nums[i]] = i;
        }
        return {};
    }
};