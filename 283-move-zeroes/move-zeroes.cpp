
class Solution {
public:
    void sol1(vector<int>& nums){
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
    void sol2(vector<int>& nums){
        int n = 0; 
        for (int i = 0 ; i < nums.size() ; i ++ ){
            if ( nums[i] != 0 ){
                int temp = nums[i];
                nums[i] = nums[n];
                nums[n] = temp;
                n++;
            }

        }
    }
    void moveZeroes(vector<int>& nums) {
        sol2(nums);
        
    }
};