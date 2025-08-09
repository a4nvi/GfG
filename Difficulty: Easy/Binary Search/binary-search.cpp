
class Solution {
public:
    int binarysearch(vector<int> &arr, int k) {
        int low = 0;
        int high = arr.size() - 1;
        int a=-1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] == k) {
                a=mid;
                high=mid-1;
            }
            if (arr[mid] < k) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return a;
    }
};
    
