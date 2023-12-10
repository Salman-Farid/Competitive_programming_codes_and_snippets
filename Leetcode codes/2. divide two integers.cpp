//https://leetcode.com/problems/divide-two-integers/

class Solution
{
public:
    long long divide(long long dividend, long long divisor)
    {

        long long p = (dividend / divisor);
        if (dividend < 0 && divisor < 0)
        {
            if (countDigits(p) >= 10)
            {
                return (p - 1);
            }
            return p;
        }

        return p;
    }
    int countDigits(long long number)
    {
        if (number == 0) return 1;
        return static_cast<int>(log10(abs(number))) + 1;
    }
    
};