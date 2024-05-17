//Option 1:
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mpp;
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            int more_needed=target-nums[i];
            if(mpp.find(more_needed)!=mpp.end())
            {
                ans.push_back(mpp[more_needed]);
                ans.push_back(i);
                break;
            }
            mpp[nums[i]]=i;

        }
        return ans;
    }
};


//Option 2:
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int>v;
        for(int i=0; i<n;i++){
            for(int j =i+1 ; j<n;j++){
                if((nums[i]+nums[j])==target) {
                    v.push_back(i);
                    v.push_back(j);
                    return v;
                }
            }
        }
        return v;
    }
};