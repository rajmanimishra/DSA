class Solution {
public:
    int thirdMax(vector<int>& nums) {

        set<int> s;

        for (int x : nums) {
            s.insert(x);
        }

        if (s.size() < 3) {
            return *s.rbegin();
        }

        auto it = s.rbegin();

        it++; // 2nd maximum
        it++; // 3rd maximum

        return *it;
    }
};