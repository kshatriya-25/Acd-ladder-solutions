/* OM VIGHNHARTAYE NAMO NAMAH :*/

#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main() {
  ios ::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while (t-- > 0) {
    int n;
    cin >> n;
    map<int, int> noOfLens;
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      noOfLens[x]++;
    }
    int ans = 0, sum = 0;
    for (auto it : noOfLens) {
      int ct = it.second;
      if (ct >= 3) {
        ans += ct * (ct - 1) * (ct - 2) / 6;
      }
      if (ct >= 2) ans += ct * (ct - 1) * sum / 2;
      sum += ct;
    }
    cout << ans << "\n";
  }
}