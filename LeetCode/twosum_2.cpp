class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        vector<int> tmp = nums;
        for (int i = 0; i < nums.size(); i++) {

            auto src = find(nums.begin(), nums.end(), target - nums[i]);

            if (src != nums.end() && src - nums.begin() != i) {
                ans.push_back(i);
                ans.push_back(src - nums.begin());

                break;
            }
        }


        return ans;
    }
};