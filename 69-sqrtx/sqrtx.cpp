class Solution {
public:
    int mySqrt(int x) {
        if (x==1){
            return x;
        }
        double result =x/2;
        double temp=0;
        while (result!=temp){
            temp=result;
            result=(x/temp + temp)/2;
        }
        int intResult=int (result);
        return intResult;   
    }
};