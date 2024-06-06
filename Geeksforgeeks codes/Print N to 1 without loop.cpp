class Solution {
  public:
    void printNos(int N,int c=1) {
        if(c>N) return;
        printNos(N,c+1);
        cout<<c<<" ";
    }
};