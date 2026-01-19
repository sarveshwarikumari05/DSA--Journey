class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(2 * n);

        for (int i = 0; i < n; i++) {
            ans[i] = nums[i];
            ans[i + n] = nums[i];
        }

        return ans;
    }
};
// In this solution, I am creating a new array which is double the size of the given array.
// First, I store the size of the input array in variable n.
// Then I create a vector ans of size 2*n to store the result.
// Using a loop, I copy each element of nums into ans at index i
// and also copy the same element at index i + n.
// This way, the original array gets repeated twice in ans.
// Finally, I return the ans vector as the required output.
