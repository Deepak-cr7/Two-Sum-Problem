class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++)
        {
            auto it=mpp.find(target-nums[i]);
            if(it!=mpp.end())
            {
                ans.push_back(it->second);
                ans.push_back(i);
                return ans;
            }
            mpp[nums[i]]=i;
        }
        return ans;
    }
};
