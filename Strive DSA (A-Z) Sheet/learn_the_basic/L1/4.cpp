class Solution {
  public:
    double switchCase(int choice, vector<double> &arr) {
        double pi = 3.14159265358979323846;
        switch(choice){
            case 1: return pi*arr[0]*arr[0];
            case 2: return arr[0]*arr[1];
        }
    }
};