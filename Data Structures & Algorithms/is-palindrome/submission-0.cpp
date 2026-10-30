class Solution {
public:
    bool isPalindrome(string s) {
        string cleaned="";
        for(int i=0;i<s.size();i++)
        {
            if(isalnum(s[i]))
            {
                cleaned+=tolower(s[i]);
            }
        }

        int i=0, j=cleaned.size()-1;
        while(i<j)
        {
            if(cleaned[i]!=cleaned[j])
            {
                return false;
            }
            
            i++;
            j--;
        }
        return true;
    }
};
