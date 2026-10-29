class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> runsum;
        runsum.push_back(nums[0]);
        for (int i = 1 ; i < nums.size() ; i++ ){
            runsum.push_back(runsum[i-1]+nums[i]);
        }
        return runsum;
    }
};