class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int b = 0;
        int c = 1;  
        for (int i = 0; i < nums.size() ; i++ ){
            if (nums[b] != nums[i]){
                int temp = nums[i];
                nums[i] = nums[b+1];
                nums[b+1] = temp;
                b++;
                c++;
            }
        }
        nums.erase(nums.begin() + c, nums.end());
        return c;
    }
};