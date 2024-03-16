class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> indexArray;
        sort(nums.begin(), nums.end()); // Sorting the input vector

        for (int i = 0; i < nums.size(); i++) {
            // Skip duplicate elements
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }

            int left = i + 1;
            int right = nums.size() - 1;

            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                if (sum == 0) {
                    vector<int> temp = {nums[i], nums[left], nums[right]};
                    indexArray.push_back(temp);

                    // Skip duplicate elements
                    while (left < right && nums[left] == nums[left + 1]) {
                        left++;
                    }
                    while (left < right && nums[right] == nums[right - 1]) {
                        right--;
                    }

                    // Move pointers to find next unique elements
                    left++;
                    right--;
                } else if (sum < 0) {
                    left++;
                } else {
                    right--;
                }
            }
        }

        return indexArray;
    }

};