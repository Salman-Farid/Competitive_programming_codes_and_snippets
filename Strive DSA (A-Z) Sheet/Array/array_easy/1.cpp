int largestElement(vector<int> &arr, int n) {
    int p = INT_MIN;
    for(int q:arr) if(p<q) p=q;
    return p;
}