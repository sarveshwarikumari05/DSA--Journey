class Solution {
public:
    void reverseArray(vector<int> &arr) {
        int i = 0, j = arr.size() - 1;

        while(i < j) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
};
//This function reverses an array in place using two pointers.
//Time Complexity: O(n), Space Complexity: O(1)