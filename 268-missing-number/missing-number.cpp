class Solution {
public:
    int missingNumber(vector<int>& nums) {
        bool found;
        int missingnum;
        for (int i=0;i<=nums.size();i++){
            found=false;
            for (int j=0;j<nums.size();j++){
                if (i==nums[j]){
                    found=true;
                    break;
                }
                else{
                    found=false;
                    missingnum=i;
                }
            }
            if (found==false){
                break;
            }
        }
        return missingnum;
    }
};