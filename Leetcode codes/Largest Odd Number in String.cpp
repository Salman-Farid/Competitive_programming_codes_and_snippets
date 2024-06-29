//Most optimal:
class Solution {
public:
    string largestOddNumber(string num) {
        while(num.length()){
            if((num.back()-'0')%2==0) num.pop_back();
            else break;
        }
        return num;
    }
};

//Mine:
class Solution {
public:
    string largestOddNumber(string num) {
        for (int p = num.size() - 1; p >= 0; p--) {
            if ((num[p] - '0') % 2 != 0) {
                return num.substr(0, p + 1);
            }
        }
        return "";
    }
};