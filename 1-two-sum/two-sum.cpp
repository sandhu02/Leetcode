class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        bool found=false;
        vector<int> indexArray;
        for (int i=0;i<nums.size();i++){
            if (found==true){
                break;
            }
            for (int j=0;j<nums.size();j++){
                if (nums[i]+nums[j]==target && i!=j){
                    indexArray.push_back(i);
                    indexArray.push_back(j);
                    found=true;
                    break;
                }
            }
        }
        return indexArray;
    }
};