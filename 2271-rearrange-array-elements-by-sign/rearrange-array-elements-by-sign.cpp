class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> tempn;
        vector<int> main;
        vector<int> tempp;
        for (int i = 0 ; i < n ; i++ ){
            if (nums[i]< 0 ){
                tempn.push_back(nums[i]);
            }
            else {
                tempp.push_back(nums[i]);
            }
        }
        for (int i = 0 ; i < n/2 ; i++){
            main.push_back(tempp[i]);
            main.push_back(tempn[i]);
        }
        return main;
    }
};