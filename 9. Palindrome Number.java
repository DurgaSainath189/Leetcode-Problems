class Solution {
    public boolean isPalindrome(int x) {
       String y=Integer.toString(x);
       int size=y.length();
       for(int i=0;i<size/2;i++){
           if(y.charAt(i)!=y.charAt(size-i-1)){
               return false;
           }
       }
    return true;
    }
}