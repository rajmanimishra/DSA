class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {

        int n = nums.size();

        // Number ko index ke roop me use karke mark karo
        for (int i = 0; i < n; i++) {

            int index = abs(nums[i]) - 1;

            if (nums[index] > 0) {
                nums[index] = -nums[index];
            }
        }

        vector<int> ans;

        // Jo index positive hai, wo number missing hai
        for (int i = 0; i < n; i++) {

            if (nums[i] > 0) {
                ans.push_back(i + 1);
            }
        }

        return ans;
    }
};