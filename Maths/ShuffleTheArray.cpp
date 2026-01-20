class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        for(int i=0;i<n;i++){
            ans.push_back(nums[i]);
            ans.push_back(nums[i+n]);
        }
        return ans;
    }
};



// In this solution, the array is divided into two parts.
// First part contains x elements and second part contains y elements.
// Using a loop, one element from the first part and one from the second
// part are added alternately into the result array.
// Finally, the shuffled array is returned.
