/* OM VIGHNHARTAYE NAMO NAMAH :*/

#include <bits/stdc++.h>

using namespace std;

#define int long long
#define double long double

bool isValidAvg(vector<int> &arr, int d, double avg, pair<int, int> &indicies) {
  int n = arr.size();
  vector<double> prefix(n + 1, 0.0), minprefix(n + 1, 0.0);
  vector<int> indextrack(n + 1, 0);
  for (int i = 1; i <= n; i++) {
    prefix[i] = prefix[i - 1] + arr[i - 1] - avg;
    if (minprefix[i - 1] > prefix[i]) {
      minprefix[i] = prefix[i];
      indextrack[i] = i;
    } else {
      minprefix[i] = minprefix[i - 1];
      indextrack[i] = indextrack[i - 1];
    }
  }
  for (int r = d; r <= n; r++) {
    if (prefix[r] - minprefix[r - d] >= 0) {
      indicies = {indextrack[r - d] + 1, r};
      return true;
    }
  }
  return false;
}

signed main() {
  ios ::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int n, d;
  cin >> n >> d;
  double l = 0, r = 100.0;
  vector<int> arr(n);
  for (int &x : arr) {
    cin >> x;
  }
  pair<int, int> indices = {1, d};
  while (r - l > 1e-7) {
    double mid = (l + r) / 2.0;
    if (isValidAvg(arr, d, mid, indices))
      l = mid;
    else
      r = mid;
  }
  cout << indices.first << " " << indices.second << endl;
}