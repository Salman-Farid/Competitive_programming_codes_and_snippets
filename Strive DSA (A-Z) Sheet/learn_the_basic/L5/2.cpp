class Solution {
  public:
    void printGfg(int N) {
        if(N==0) return;
        printGfg(N-1);
        cout<<"GFG"<<" ";
    }
};