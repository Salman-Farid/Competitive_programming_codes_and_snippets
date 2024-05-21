//process 1
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int profit= 0, mn = INT_MAX, n = prices.size(), selling_cost;
        for (int i = 0; i < n; i++)
        {
            mn = min (mn, prices[i]);
            selling_cost = (prices[i]-mn);
            profit = max(profit,selling_cost);
        }
        return profit;
    }
};



//process 2
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int mx = 0, mn = INT_MAX, n = prices.size();
        for (int i = 0; i < n; i++)
        {
            if (prices[i] < mn) mn = prices[i];
            if (prices[i]-mn > mx) mx = prices[i]-mn;
        }
        return mx;
    }
};