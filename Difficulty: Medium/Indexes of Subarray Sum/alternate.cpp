//This approach isn't ideal due to O(n^3) time complexity but it still works.
class Solution {
public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        int n = arr.size();

        for (int start = 0; start < n; start++) {
            int sum = 0;
            for (int end = start; end < n; end++) {
                sum += arr[end];
                if (sum == target) {
                    return {start, end};
                }
            }
        }
        return {-1};  // correctly returning a vector<int>
    }
};
