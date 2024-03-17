class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        bool found=false;
        int i=0;
        while (i<nums.size()-1){
            if (nums[i]==nums[i+1]){
                found = true;
                break;
            }
            
            i++;
            
        }
        return found;
    }
};