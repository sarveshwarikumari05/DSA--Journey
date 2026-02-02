class Solution {
public:
    int getSecondLargest(vector<int> &arr) {
        int n = arr.size();
        if (n < 2) {
            return -1;
        }

        int max1, max2;

        if (arr[0] > arr[1]) {
            max1 = arr[0];
            max2 = arr[1];
        } 
        else if (arr[0] < arr[1]) {
            max1 = arr[1];
            max2 = arr[0];
        } 
        else { // arr[0] == arr[1]
            max1 = arr[0];
            max2 = -1;
        }

        for (int i = 2; i < n; i++) {
            if (arr[i] > max1) {
                max2 = max1;
                max1 = arr[i];
            }
            else if (arr[i] < max1 && arr[i] > max2) {
                max2 = arr[i];
            }
        }

        return max2;
    }
};
//This function finds the second largest element in an array.
//Time Complexity: O(n), Space Complexity: O(1)