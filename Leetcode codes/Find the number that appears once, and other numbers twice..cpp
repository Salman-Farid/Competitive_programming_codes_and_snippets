class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map < int , int > m;
        for(int i= 0 ; i<nums.size(); i++) m[nums[i]]++;
        for(auto h:m) if(h.second == 1) return h.first;
        return -1;
    }
};