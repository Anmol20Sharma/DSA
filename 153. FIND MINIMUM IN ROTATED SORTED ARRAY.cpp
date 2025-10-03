class Solution {
public:
    int findMin(vector<int>& nums) {
        int mini = nums[0];   
        for (int i : nums) {
            if (mini > i) {
                mini = i;
            }
        }
        return mini;
    }
};
