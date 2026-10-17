class Solution {
public:
    int sol1(vector<int>& nums){
        sort(nums.begin(),nums.end());
        for (int i = 0; i < nums.size() ; i++){
            if (nums[i] != i){
                return i;
            }
            else if ( i == nums.size()-1 && nums[i] == i ){
                return nums.size();
            }
        }
        return 0;
    }
    int missingNumber(vector<int>& nums) {
        return sol1(nums);
    }
};