class Solution {
public:
    vector<int> brute(vector<int>& nums){
        for (int i = 0 ; i < nums.size() ; i++ ){
            nums[i] = nums[i]*nums[i];
        }
        sort(nums.begin(), nums.end());
        return nums;
    }
    vector<int> opt(vector<int>& nums){
        int j = nums.size()-1;
        int i = 0; 
        vector<int> ans;
        while(i<=j){
            if (abs(nums[i])>abs(nums[j])){
                nums[i] = nums[i]*nums[i];
                ans.push_back(nums[i]);
                i++;
            }
            else {
                nums[j] = nums[j]*nums[j];
                ans.push_back(nums[j]);
                j--;
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }

    
    vector<int> sortedSquares(vector<int>& nums) {
        return opt(nums);
    }
};