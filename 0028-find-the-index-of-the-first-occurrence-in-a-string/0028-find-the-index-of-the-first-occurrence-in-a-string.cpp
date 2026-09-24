#include <string>

using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();

        if (m > n) return -1;

        // Sirf (n - m) tak chalana kaafi hai
        for (int i = 0; i <= n - m; i++) {
            int j = 0;
            while (j < m && haystack[i + j] == needle[j]) {
                j++;
            }
            if (j == m) {
                return i; // Poori needle match ho gayi
            }
        }

        return -1;
    }
};