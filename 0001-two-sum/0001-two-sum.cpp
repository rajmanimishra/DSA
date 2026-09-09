class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {

        vector<pair<int, int>> v;

        for (int i = 0; i < arr.size(); i++) {
            v.push_back({arr[i], i});
        }

        sort(v.begin(), v.end());

        int st = 0;
        int end = v.size() - 1;

        while (st < end) {

            int sum = v[st].first + v[end].first;

            if (sum == target) {
                return {v[st].second, v[end].second};
            }
            else if (sum < target) {
                st++;
            }
            else {
                end--;
            }
        }

        return {};
    }
};