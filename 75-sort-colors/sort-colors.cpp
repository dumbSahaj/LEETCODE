class Solution {
public:
    int partition(vector<int>& arr, int low, int high) {
        int pivot = arr[low];
        int i = low;
        int j = high;

        while (i < j) {
            while (arr[i] <= pivot && i <= high - 1) {
                i++;
            }

            while (arr[j] > pivot && j >= low + 1) {
                j--;
            }

            if (i < j) {
                swap(arr[i], arr[j]);
            }
        }

        swap(arr[low], arr[j]);
        return j;
    }

    void qs(vector<int>& nums, int low, int high) {
        if (low < high) {
            int pindex = partition(nums, low, high);
            qs(nums, low, pindex - 1);
            qs(nums, pindex + 1, high);
        }
    }

    void sortColors(vector<int>& nums) {
        qs(nums, 0, nums.size() - 1);
    }
};