class Solution {
public:
    bool isPalindrome(int x) {
        string stringX=to_string(x);
        string reverseString="";
        for (int i=stringX.length()-1;i>=0;i--){
            reverseString+=stringX[i];
        }
        if (reverseString==stringX){
            return true;
        }
        else{
            return false;
        }
    }
};