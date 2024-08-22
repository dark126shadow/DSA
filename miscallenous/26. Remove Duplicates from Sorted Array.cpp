class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        for (int i = 0; i < nums.size() - 1; ) { // No increment here
            if (nums[i] == nums[i + 1]) {
                nums.erase(nums.begin()+i+1) ; // Erase element at i + 1
            } else {
                i++; // Only increment i if no erase happens
            }
        }
        return nums.size();
    }
};
