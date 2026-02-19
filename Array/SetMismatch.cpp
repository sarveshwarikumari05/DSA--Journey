class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {

        int n = nums.size();
        int curr = 0;
        int currNext = 0;

        vector<int> count(n+1, 0);

        for(int i = 0; i < n; i++){
            count[nums[i]]++;
        }

        for(int i = 1; i <= n; i++){
            if(count[i] == 2|| count[i]>2)
                curr = i;

            if(count[i] == 0)
                currNext = i;
        }

        return {curr, currNext};
    }
};
