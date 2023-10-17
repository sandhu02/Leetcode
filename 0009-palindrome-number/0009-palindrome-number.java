class Solution {
    public boolean isPalindrome(int x) {
        boolean result;
        String reverse="";
        String snum=Integer.toString(x);
        for (int i=snum.length()-1;i>=0;i--){
            reverse=reverse+snum.charAt(i);
        }
        if (snum.equals(reverse)){
            result=true;
        }
        else{
            result=false;
        }
        return result;
    }
}