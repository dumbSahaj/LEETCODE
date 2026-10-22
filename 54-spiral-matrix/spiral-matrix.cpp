class Solution {
public:
    vector<int> myapp(vector<vector<int>>& matrix){
        vector<int> main;
        int m = matrix.size();
        int n = matrix[0].size();

        circle(matrix, main, 0, m - 1, 0, n - 1);
        return main;
    }
    void circle(vector<vector<int>>& matrix, vector<int>& main,
                int top, int bottom, int left, int right) {

        if (top > bottom || left > right)
            return;

        first(matrix, main, top, left, right);
        second(matrix, main, right, top + 1, bottom);

        if (top < bottom)
            third(matrix, main, bottom, right - 1, left);

        if (left < right)
            fourth(matrix, main, left, bottom - 1, top + 1);

        circle(matrix, main, top + 1, bottom - 1,
               left + 1, right - 1);
    }

    void first(vector<vector<int>>& matrix, vector<int>& main,
               int row, int left, int right) {
        for (int j = left; j <= right; j++)
            main.push_back(matrix[row][j]);
    }

    void second(vector<vector<int>>& matrix, vector<int>& main,
                int col, int top, int bottom) {
        for (int i = top; i <= bottom; i++)
            main.push_back(matrix[i][col]);
    }

    void third(vector<vector<int>>& matrix, vector<int>& main,
               int row, int right, int left) {
        for (int j = right; j >= left; j--)
            main.push_back(matrix[row][j]);
    }

    void fourth(vector<vector<int>>& matrix, vector<int>& main,
                int col, int bottom, int top) {
        for (int i = bottom; i >= top; i--)
            main.push_back(matrix[i][col]);
    }
    

    vector<int> rsol(vector<vector<int>>& matrix){
        int n = matrix.size();
        int m = matrix[0].size();
        int top = 0, left = 0, bottom = n-1, right = m-1;
        vector<int> main; 

        while(top <= bottom && left <= right){
            for (int i = left ; i <= right ; i++){
                main.push_back(matrix[top][i]);
            }
            top++;
            for (int i = top ; i <= bottom ; i++){
                main.push_back(matrix[i][right]);
            }
            right--;
            if (top <= bottom){
                for (int i = right ; i >= left ; i--){
                main.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            if (left <= right){
                for (int i = bottom ; i >= top ; i--){
                main.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return main;
    }

    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        return rsol(matrix);
    }
};