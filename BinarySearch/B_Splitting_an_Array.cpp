/* OM VIGHNHARTAYE NAMO NAMAH :*/

#include <bits/stdc++.h>

using namespace std;

#define int long long

bool segmentPsbl(vector<int> &arr, int k, int sum) {
  int numsegment = 0;
  int temp = 0;
  for (int i = 0; i < arr.size(); i++) {
    temp += arr[i];
    if (temp > sum) {
      temp = arr[i];  // Start a new segment with current element
      ++numsegment;
    }
  }
  // Increment numsegment for the last segment if temp is not zero
  if (temp > 0) {
    ++numsegment;
  }
  return numsegment <= k;  // Ensure we do not exceed k segments
}

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int n, k;
  cin >> n >> k;
  vector<int> arr(n);
  int r = 0, l = -1;
  for (int &x : arr) {
    cin >> x;
    r += x;
    l = max(l, x);
  }
  while (l < r) {
    int mid = l + (r - l) / 2;
    if (segmentPsbl(arr, k, mid))
      r = mid;
    else
      l = mid + 1;  // thought must be given here
  }
  cout << l << endl;
}
