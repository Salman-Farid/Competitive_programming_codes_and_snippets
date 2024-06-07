//Option 1:
class Solution {
public:
    void reverseString(vector<char>& s, int i = 0) {
        int n = s.size();
        if (i >= n / 2) return;
        swap(s[i], s[n - i - 1]);
        reverseString(s, i + 1);
    }
};


//OPtion 2:
class Solution {
public:
    void reverseString(vector<char>& s) {
        int l = 0, r = s.size() - 1;
        reverse(s, l, r);
    }

private:
    void reverse(vector<char>& s, int l, int r) {
        if (l >= r) return;
        swap(s[l], s[r]);
        reverse(s, l + 1, r - 1);
    }
};
