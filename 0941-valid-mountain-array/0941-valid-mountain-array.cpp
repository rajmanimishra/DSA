class Solution {
public:
    bool validMountainArray(vector<int>& arr) {

        int n = arr.size();

        if (n < 3)
            return false;

        int i = 0;

        // Increasing part
        while (i + 1 < n && arr[i] < arr[i + 1]) {
            i++;
        }

        // Peak first ya last nahi honi chahiye
        if (i == 0 || i == n - 1)
            return false;

        // Decreasing part
        while (i + 1 < n && arr[i] > arr[i + 1]) {
            i++;
        }

        // Agar end tak pahunch gaye, valid mountain
        return i == n - 1;
    }
};