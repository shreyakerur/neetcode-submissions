class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxlength = 0;
        map<char,int> mp;
        int L=0;
        for(int R=0;R<s.size();R++)
        {
            mp[s[R]]++;
            while(mp[s[R]]>1)
            {
                mp[s[L]]--;
                L++;
            }
            maxlength = max(maxlength,R-L+1);
        }
        return maxlength;
    }
};
