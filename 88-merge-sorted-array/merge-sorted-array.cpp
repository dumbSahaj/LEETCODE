class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0;
        int j=0;
        vector<int> unios;
        while ( i<m && j<n ){
            if ( nums1[i] < nums2[j] ){
                unios.push_back(nums1[i]);
                i++;
            }
            else {
                unios.push_back(nums2[j]);
                j++;
            }
            
        }
        while (i < m) {
            unios.push_back(nums1[i]);
            i++;
        }

        while (j < n) {
            unios.push_back(nums2[j]);
            j++;
        }
        for ( int i = 0 ; i < nums1.size() ; i++ ){
            nums1[i] = unios[i]; 
        }
    }
};