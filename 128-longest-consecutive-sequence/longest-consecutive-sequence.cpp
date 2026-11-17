class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int longest = 0;
        unordered_set<int> st; 
        for ( int i = 0 ; i < nums.size() ; i++ ){
            st.insert(nums[i]);
        } 
        for (auto it : st){
            if ( st.find(it-1) == 0 ){
                int x = it;
                int lastlong = 1;
                while ( st.find(x+1) != st.end() ){
                    x++;
                    lastlong++;
                }
                longest = max(longest,lastlong);
            }
        }
        return longest;
    }
};