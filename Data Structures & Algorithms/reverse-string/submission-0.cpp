class Solution {
public:
    void reverseString(vector<char>& s) {
        int i=0, ch=s.size()-1;
        while(i<ch)
        {
            swap(s[ch],s[i]);
            i++;
            ch--;
        }
    }
};