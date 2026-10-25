class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> main;

        for (int i = 0; i < rowIndex+1; i++) {
            vector<int> temp(i + 1, 1);

            for (int j = 1; j < i; j++) {
                temp[j] = main[i - 1][j - 1] + main[i - 1][j];
            }

            main.push_back(temp);
        }

        return main[rowIndex];
    }
};