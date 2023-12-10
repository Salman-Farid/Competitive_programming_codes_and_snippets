// https://leetcode.com/problems/two-sum/
#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap; 

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (numMap.find(complement) != numMap.end()) {
                return {numMap[complement], i};
            }
            numMap[nums[i]] = i;
        }
        return {};
    }
};



//option : 2
// And be patient. Allah will not waste the reward of the virtuous.
// #include <vector>
// #include <unordered_map>

// class Solution
// {
// public:
//     vector<int> twoSum(vector<int> &nums, int target)
//     {
//         int output[2];
//         for (int l = 0; l < nums.size(); l++)
//         {
//             for (int j = l + 1; j < nums.size(); j++) // Use j = i + 1 to avoid comparing elements with themselves.
//             {
//                 if (nums[l] + nums[j] == target)
//                 {
//                     output[0]=l;
//                     output[1]=j;
                    
//                 }
//             }
//         }
//         return {output[0],output[1]};
//     }
// };



//most optimized way:
// class Solution {

//  public:

//   vector<int> twoSum(vector<int>& nums, int target) {

//     unordered_map<int, int> numToIndex;

//     for (int i = 0; i < nums.size(); ++i) {

//       if (const auto it = numToIndex.find(target - nums[i]);

//           it != numToIndex.cend())

//         return {it->second, i};

//       numToIndex[nums[i]] = i;

//     }

//     throw;

//   }

// };

