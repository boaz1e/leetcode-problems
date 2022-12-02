class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> s1_freq(26,0), s2_freq(26,0);
        if(s1.size()>s2.size())
            return false;
        for(int i=0;i<s1.size();i++)
        {
            s1_freq[s1[i]-'a']++;
            s2_freq[s2[i]-'a']++;
        }
        if(s1_freq==s2_freq)
                return true;
        for(int i=0, j=s1.size();j<s2.size();)
        {
             s2_freq[s2[i]-'a']--;
             s2_freq[s2[j]-'a']++;
             if(s1_freq==s2_freq)
                return true;
            i++; j++;
        }
        return false;
    }
};