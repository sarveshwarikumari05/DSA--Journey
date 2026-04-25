class Solution {
public:
bool solve(string &s , int i , int j){
    if(i>=j){
    return true;
    }
    if(s[i]==s[j]){
        return solve(s,i+1,j-1);
        
    }else {
        return false;
    }
}
    string longestPalindrome(string s) {
      int n = s.size();
      int maxLength = INT_MIN;
      int sp = 0;
      for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(solve(s,i,j)==true){
                if(j-i+1>maxLength){
                maxLength = j-i+1;
                sp=i;
                }
            }
        }
      } 
      return s.substr(sp, maxLength);
    }
};

// Time Complexity: O(n^3) due to the nested loops and the recursive palindrome check.
// Space Complexity: O(n) due to the recursive call stack in the worst case.