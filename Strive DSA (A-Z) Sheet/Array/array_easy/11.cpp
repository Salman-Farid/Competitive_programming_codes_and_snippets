class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size(),p=0,m=0;
        for(int i = 0; i < n; i++) { 
            if(nums[i] == 1) p += 1;
            else p = 0;
            if(m < p) m = p;
        }
        return m;
    }
};