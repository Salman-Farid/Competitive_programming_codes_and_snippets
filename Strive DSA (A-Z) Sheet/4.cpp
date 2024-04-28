int removeDuplicates(vector<int> &arr, int n) {
vector<int>v;
// And be patient. Allah will not waste the reward of the virtuous.
// اللَّهُ أَكْبَرُ //And ˹surely˺ your Lord will give so much to you that you will be pleased.
    for (int i = 0; i < n; i++) {
      if (arr[i] != arr[i - 1])
        v.push_back(arr[i]);
    }
    return v.size();
}