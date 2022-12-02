class Solution {
public:
    string addBinary(string a, string b) {
        string ans;
        int carry=0, i ,j;
        i=a.size()-1; j=b.size()-1;
        while(i>=0 || j>=0 || carry==1)
        {
            if(i>=0){
                carry+=a[i]-'0';
                i--;
            }
            if(j>=0){
                carry+=b[j]-'0';
                j--;
            }
            ans.insert(ans.begin(), carry%2+'0');
            carry/=2;
        }
        return ans;
    }
};