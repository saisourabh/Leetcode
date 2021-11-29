class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
                if(nums.at(i)+nums.at(j)==target)
                {
                    vector<int> ret={(i),(j)};
                    return ret;
                }
        }
        vector<int> retu;
        return retu;
    }
};