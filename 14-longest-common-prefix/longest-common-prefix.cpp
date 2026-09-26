class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string one;
        for (int j = 0; j < strs[0].size(); j++) {
            for (int i = 0; i < strs.size(); i++) {

                if (strs[0][j] != strs[i][j]) {
                    return one;
                }
            }

            one += strs[0][j];
        }

        return one;
    }
};