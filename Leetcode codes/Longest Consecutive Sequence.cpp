#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        sort(nums.begin(), nums.end()); 
        int n = nums.size(), p=1 , c = 1;  
        for (int i = 0; i < n - 1; i++) {
            if (nums[i + 1] == nums[i]) continue; 
            else if (nums[i + 1] - nums[i] == 1) c++;
            else c = 1; p = max(p, c);
        }
        return p;
    }
};
