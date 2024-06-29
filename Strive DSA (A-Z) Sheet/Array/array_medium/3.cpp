//Most_optimized: 
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int majority = nums[0];
        int count = 1;
        for(int i =1; i<n; ++i){
            if(nums[i]==majority){
                count +=1;
            }
            else{
                count -=1;
                if(count==0){
                    majority = nums[i];
                    count =1;
                }
            }
        }
        return majority;
            
    }
};


//My approch:
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size(),l=0,x;
        map<int , int >m;
        for(int i =0; i<n; i++){
            m[nums[i]]++;
        }
        for(auto p:m) if(p.second>l) {
            l=p.second;
            x=p.first;
        }
        return x;
    }
};