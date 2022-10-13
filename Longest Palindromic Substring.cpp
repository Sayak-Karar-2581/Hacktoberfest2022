/*Given a string s, return the longest palindromic substring in s.

A string is called a palindrome string if the reverse of that string is the same as the original string.
*/

class Solution {
public:
    string longestPalindrome(string s) {
        int dp[s.length()][s.length()];
        memset(dp,0,sizeof(dp));
        int mx=0,index=0;
        for(int j=0; j<s.length(); j++){
            for(int i=0; i<=j; i++){
                bool flag = (s[i]==s[j]);
                dp[i][j] = (j-i)>2?dp[i+1][j-1] && flag:flag;
                if(dp[i][j] && j-i+1>mx){
                    mx=j-i+1;
                    index=i;
                }
            }
        }
        return s.substr(index,mx);
    }
};
