vector<int> moveZeros(int n, vector<int> a) {
  int m = 0;
  vector<int> arr2(n, 0);
  for (int j = 0; j < n; j++) {
    if (a[j] != 0) {
      arr2[m] = a[j];
      m++;
    }
  }
  return arr2;
}
