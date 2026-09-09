class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();

        for (int i = 0; i < n; i++) {

            if (arr[i] == 0) {

                // Right shift
                for (int j = n - 1; j > i; j--) {
                    arr[j] = arr[j - 1];
                }

                // Duplicate zero
                if (i + 1 < n) {
                    arr[i + 1] = 0;
                }

                // Skip duplicated zero
                i++;
            }
        }
    }
};