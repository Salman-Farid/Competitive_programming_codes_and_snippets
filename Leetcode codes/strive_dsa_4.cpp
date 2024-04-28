class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    int j=1;
    // And be patient. Allah will not waste the reward of the virtuous.
    // اللَّهُ أَكْبَرُ //And ˹surely˺ your Lord will give so much to you that you will be pleased.
    for (int i = 1; i < nums.size(); i++) {
      if (nums[i] != nums[i - 1]){
        nums[j] = nums[i];
        j++;
      } 
    }
    return j;
    }
};