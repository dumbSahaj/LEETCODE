class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int mac = 0; 
        int mac2 = 0;
        for (int i = 0 ; i < nums.size() ; i++ ){
            if (nums[i] == 1){
                mac += 1;
                mac2 = max(mac2, mac);
            }
            else{
                mac = 0;
            }
        }
        return max(mac2, mac);
    }

};