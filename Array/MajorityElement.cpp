class Solution {
public:
    int majorityElement(vector<int>& nums) {
    int n= nums.size();
    int freq=0,ans=0;
for(int i=0;i<n;i++){
    if(freq==0){
        ans=nums[i];

    }
    if (ans==nums[i]){
        freq++;
    }
    else
    {
        freq--;
    }

}
  return ans;      
    }
};

// In this solution, I am using the Boyer-Moore Voting Algorithm to find the majority element in the array.
// I initialize two variables, freq and ans, to keep track of the frequency of the current candidate for majority element and the candidate itself.
// I iterate through the array, and for each element, I check if the frequency is zero. If it is, I update the candidate (ans) to the current element.
// Then, I check if the current element is the same as the candidate. If it is  the same, I increment the frequency. Otherwise, I decrement the frequency.      