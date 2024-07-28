/* OM VIGHNHARTAYE NAMO NAMAH :*/

/* OM VIGHNHARTAYE NAMO NAMAH :*/

#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main() {
  ios ::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int n, k;
  cin >> n >> k;
  vector<int> arr(n);
  for (int &x : arr) cin >> x;
  while (k-- > 0) {
    int q;
    cin >> q;
    auto ind = lower_bound(arr.begin(), arr.end(), q);
    if (*ind != q) {
      cout << "NO" << endl;
    } else
      cout << "YES" << endl;
  }
}