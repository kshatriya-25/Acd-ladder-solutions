/* OM VIGHNHARTAYE NAMO NAMAH :*/

#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main() {
  ios ::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int &x : arr) cin >> x;
  sort(arr.begin(), arr.end());
  int k;
  cin >> k;
  while (k-- > 0) {
    int l, r;
    cin >> l >> r;
    int i = lower_bound(arr.begin(), arr.end(), l) - arr.begin();
    int j = upper_bound(arr.begin(), arr.end(), r) - arr.begin();
    cout << j - i << " ";
  }
}