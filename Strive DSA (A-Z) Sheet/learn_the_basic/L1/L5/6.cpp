//Option 1:
class Solution
{
public:
    //Function to find factorial numbers less than or equal to N.
    vector<long long> factorialNumbers(long long N)
    {
        vector<long long> ans;
        long long int fact = 1;
        int x = 2;

        //Iterating until factorial is less than or equal to N.
        while (fact <= N)
        {
            //Adding factorial to the answer list.
            ans.push_back(fact);

            //Calculating next factorial by multiplying with next number.
            fact = fact * x;
            x++;
        }
        //Returning the list of factorial numbers.
        return ans;
    }
};


//Option 2:
//Recursive function way:

class Solution
{
public:
    vector<long long> factorialNumbers(long long N)
    {
        vector<long long> result;
        collectFactorials(1, N, 1, result);
        return result;
    }

private:
    void collectFactorials(int current, long long N, long long fact, vector<long long>& result)
    {
        if (fact > N)
            return;
        result.push_back(fact);
        collectFactorials(current + 1, N, fact * (current + 1), result);
    }
};