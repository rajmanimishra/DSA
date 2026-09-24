#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        // Sabse chhota aur sabse bada string find karo
        string s1 = *min_element(strs.begin(), strs.end());
        string s2 = *max_element(strs.begin(), strs.end());

        string ans = "";
        for (int i = 0; i < s1.size(); i++) {
            if (s1[i] == s2[i]) {
                ans += s1[i];
            } else {
                break; // Jahan mismatch mila, wahi ruk jao
            }
        }

        return ans;
    }
};