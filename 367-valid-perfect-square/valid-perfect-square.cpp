class Solution {
public:
    bool isPerfectSquare(int num) {
        double result =num/2;
        double temp=0;
        while (result!=temp){
            temp=result;
            result=(num/temp + temp)/2;
        }
        int intResult=int (result);
        if (result==intResult){
            return true;
        }
        else{
            return false;
        }
    }
};