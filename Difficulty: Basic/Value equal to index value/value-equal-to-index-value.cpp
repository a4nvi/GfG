// User function template for C++
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> valueEqualToIndex(vector<int> &arr) {
        int n = arr.size();
        vector<int> result;
        for (int i = 0; i < n; i++) {
            if (arr[i] == i + 1) {   
                result.push_back(i + 1);
            }
        }
        return result;
    }
};