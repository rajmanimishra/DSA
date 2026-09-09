class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
        
        vector<vector<int>> result;
        sort(arr.begin(), arr.end());

        for(int i = 0; i < arr.size() - 2; i++) {
            
            // Skip duplicate i
            if(i > 0 && arr[i] == arr[i - 1])
                continue;

            int start = i + 1;
            int end = arr.size() - 1;

            while(start < end) {
                int sum = arr[i] + arr[start] + arr[end];

                if(sum == 0) {
                    result.push_back({arr[i], arr[start], arr[end]});

                    // Skip duplicates for start
                    while(start < end && arr[start] == arr[start + 1])
                        start++;

                    // Skip duplicates for end
                    while(start < end && arr[end] == arr[end - 1])
                        end--;

                    start++;
                    end--;
                }
                else if(sum < 0) {
                    start++;
                }
                else {
                    end--;
                }
            }
        }
        return result;
    }
};