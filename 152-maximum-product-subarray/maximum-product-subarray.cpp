class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxproduct = nums[0];

        for (int startpos = 0; startpos < nums.size(); ++startpos) {
            int product = 1;
            for (int looplimit = startpos; looplimit < nums.size(); ++looplimit) {
                product *= nums[looplimit];
                maxproduct = std::max(maxproduct, product);
            }
        }
        return maxproduct;
    }
};