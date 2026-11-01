class Solution {
public:
    int countDigitsLog(int num) {
        if (num == 0) return 1;
        return std::floor(std::log10(std::abs(num))) + 1;
    }
    int minMergedInteger(vector<int>& nums) {
        vector<int> arr;
        
        for (int i = 0 ; i < nums.size()-1 ; i += 2 ){
            arr.push_back( ( nums[i]*pow( 10,countDigitsLog(nums[i+1]) ) )+nums[i+1]);
        } 
        int min = arr[0];
        for (int i = 1 ; i < arr.size() ; i++){
            if (arr[i] < min ){
                min =arr[i];
            }
        }
        return min;
    }
};