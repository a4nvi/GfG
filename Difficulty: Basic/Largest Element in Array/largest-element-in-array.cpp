class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int n = arr.size();
        int maxElement = arr[0];  // start with first element
        
        for (int i = 1; i < n; i++) {
            if (arr[i] > maxElement) {
                maxElement = arr[i];
            }
        }
        return maxElement;
    }
};
