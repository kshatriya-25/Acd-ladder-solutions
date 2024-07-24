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
    int all, a, b, none;
    cin >> all >> a >> b >> none;
    if (all == 0)
      cout << 1 << endl;
    else {
      int ans = all + (min(a, b) * 2) + min(all + 1, abs(a - b) + none);
      cout << ans << endl;
    }
  }
}