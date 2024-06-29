//most optimal way
class Solution {
public:
    static vector<int> rearrangeArray(vector<int>& nums)
    {
        std::ios_base::sync_with_stdio(false);
        std::cout.tie(0);

        int pos = 0;
        int neg = 1;

        std::vector< int > reordered( nums.size() );

        for ( int i = 0; i < nums.size(); ++i )
        {
            if ( nums[ i ] < 0 )
            {
                reordered[ neg ] = nums[ i ];
                neg += 2;
            }
            else
            {
                reordered[ pos ] = nums[ i ];
                pos += 2;
            }
        }

        return reordered;
    }
};

//My approach 
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n= nums.size(), d=n/2;
        vector<int>v,w,m;
        for (int i = 0; i < n; i++) {
            if (nums[i] < 0) w.push_back(nums[i]);
            else v.push_back(nums[i]);
        }
        for (int i = 0; i < d; i++) {
            m.push_back(v[i]);
            m.push_back(w[i]);
        }
        return m;
    }
};
