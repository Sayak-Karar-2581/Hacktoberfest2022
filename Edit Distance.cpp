/*
Given two strings word1 and word2, return the minimum number of operations required to convert word1 to word2.

You have the following three operations permitted on a word:

Insert a character
Delete a character
Replace a character
*/

class Solution {
public:
    int minDistance(string word1, string word2) {
        int dp[word1.length()+1][word2.length()+1];
        for(int i=0; i<word1.length()+1; i++){
            for(int j=0; j<word2.length()+1; j++){
                if(i==0 && j==0){
                    dp[i][j]=0;
                }
                else if(i==0){
                    dp[i][j] = j;
                }
                else if(j==0){
                    dp[i][j]=i;
                }
                else if(word1[i-1]==word2[j-1]) dp[i][j] = dp[i-1][j-1];
                else{
                    dp[i][j] = 1+min(dp[i][j-1],min(dp[i-1][j],dp[i-1][j-1]));
                }
            }
        }
        return dp[word1.length()][word2.length()];
    }
};
