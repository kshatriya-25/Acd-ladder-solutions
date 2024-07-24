/* OM VIGHNHARATYE NAMO NAMAH :*/

#include <bits/stdc++.h>
using namespace std;
#define int long long

int rangesum(int l, int r) {
  if (l > r)
    return 0;
  else {
    return (l + r) * (r - l + 1) / 2;
  }
}
signed main() {
  ios ::sync_with_stdio(false);
  int t;
  cin >> t;
  while (t-- > 0) {
    int n, x, y;
    cin >> n >> x >> y;
    int l = lcm(x, y);
    int plus = floor(n / x) - floor(n / l);
    int minus = floor(n / y) - floor(n / l);
    cout << rangesum(n - plus + 1, n) - rangesum(1, minus) << "\n";
  }
}
