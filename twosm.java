class Solution {
    public boolean isPalindrome(int x) {
        if(x<0)
            return false;
        String str = String.valueOf(x);
        String rev_str = "";
        for(int i =0; i< str.length(); i++){
            char c = str.charAt(i);
            rev_str = c + rev_str;       
        }
        
        if(rev_str.equals(str))
            return true;
        else
            return false;
        
    }
}
