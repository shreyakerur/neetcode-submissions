class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int,int> mp;
        for(int i=0; i<nums.size(); i++)
        {
            mp[nums[i]]++;
        }

        for(auto x:mp)
        {
            if(x.second>1)
            {
                return true;
            }
        }
        return false;
    }
};