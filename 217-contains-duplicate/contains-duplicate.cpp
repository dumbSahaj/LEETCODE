class Solution {
public:
    bool brute(vector<int>& nums){
        for (int i = 0 ; i < nums.size() ; i++ ){
            for (int j = nums.size() - 1 ; j > i ; j-- ){
                if (nums[i] == nums[j])
                return 1;
            }
        }
        return 0;

    }
    bool better(vector<int>& nums){
        sort(nums.begin(),nums.end());
        for ( int i = 0 ; i < nums.size()-1 ; i++ ){
            if (nums[i] == nums[i+1]){
                return 1;
            }
        }
        return 0; 
    }
    bool containsDuplicate(vector<int>& nums) {
        return better(nums);

    }
};