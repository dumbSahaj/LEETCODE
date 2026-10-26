class Solution {
public:
    void allzero(vector<vector<int>>& matrix,int row, int colom){
        for ( int i = 0 ; i < matrix[row].size() ; i++){
            matrix[row][i] = 0;
        }
        for ( int i = 0 ; i < matrix.size() ; i++){
            matrix[i][colom] = 0;
        }
    }
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>> wow;
        for (int k = 0; k < matrix.size(); k++)
            {
                for (int l = 0; l <  matrix[0].size(); l++)
                {
                    if (matrix[k][l]==0 )
                    {
                        wow.push_back({k,l});
                    }
                }
                    
            }
        for (int i = 0 ; i < wow.size() ; i++){
            allzero(matrix,wow[i].first,wow[i].second );
        }
    }

};