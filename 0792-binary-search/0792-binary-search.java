class Solution {
    public int search(int[] nums, int target) {
        int out=0;
        boolean found=false;
        for (int i=0;i<nums.length;i++){
            if (nums[i]==target){
                out=i;
                found=true;
                break;
            }
        if (found==false){
            out=-1;
        }    
        }
        return out;
    }
}