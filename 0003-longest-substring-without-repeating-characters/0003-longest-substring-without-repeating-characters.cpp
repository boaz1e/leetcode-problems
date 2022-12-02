class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0, j=0, maxSize = 0;
        set<char> st;
        while(j < s.size())
        {
            if(st.count(s[j])==0)
            {
                st.insert(s[j]);
                maxSize = max(maxSize, (int)st.size());
                j++;
            }
            else
            {
                st.erase(s[i]);
                i++;
            }
        }
        return maxSize; 
    }
};