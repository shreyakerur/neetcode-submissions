class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.size()!=t.size()) {
            return false;
        }

        map<char, int> mp;

        // Step 1: Count characters in s
        for (int i = 0; i < s.size(); i++) {
            mp[s[i]]++;
        }

        // Step 2: Subtract characters in t
        for (int i = 0; i < t.size(); i++) {
            mp[t[i]]--;
        }

        // Step 3: Check the final counts
        for (auto x : mp) {
            if (x.second!=0) {
                return false;
            }
        }

        return true;
    }
};