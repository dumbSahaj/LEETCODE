class Solution {
public:
    int firstUniqChar(string s) {
        for (int i = 0 ; i < s.size() ; i++){
            bool check = 0;
            for ( int j = 0 ; j < s.size() ; j++){
                if (s[i] == s[j] && i != j ){
                    check = 1;
                    break;
                }
            }
            if (!check){
                return i;
            }
        }
        return -1;
    }
};