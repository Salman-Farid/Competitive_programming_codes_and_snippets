class Solution {
  public:
    long long sumOfSeries(long long n) {
        if(n==0) return 0;
        return n*n*n+sumOfSeries(n-1);
    }
};