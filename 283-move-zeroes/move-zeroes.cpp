
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0; 
        int check = 0; 
        while (i < nums.size()-check){
            
            if ( nums[i] == 0 ){
                nums.erase(nums.begin() + i);
                nums.push_back(0);
                check += 1; 
            }
            else{
                i++;
            }
        }
    }
};