class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int m = 0; 
        vector<int> arr2(n, 0); 
        for (int j = 0; j < n; j++) {
            if (nums[j] != 0) {
                arr2[m] = nums[j];
                m++;
            }
        }
        nums=arr2;
    }
};