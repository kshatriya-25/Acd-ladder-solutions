/* OM VIGHNHARTAYE NAMO NAMAH :*/

#include <bits/stdc++.h>

using namespace std;

#define int long long
#define double long double
signed main() {
  ios ::sync_with_stdio(false);
  cout.precision(10);
  cout.setf(ios::fixed);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while (t-- > 0) {
    int n, d, h;
    cin >> n >> d >> h;
    vector<int> heights(n);
    for (int &x : heights) cin >> x;
    double ans = (double)d * h / 2.0;
    for (int i = 0; i + 1 < n; i++) {
      if (heights[i + 1] >= heights[i] + h)
        ans += (double)d * h / 2.0;
      else {
        double d2 = (double)d * (heights[i] + h - heights[i + 1]) / h;
        double nh = heights[i + 1] - heights[i];
        ans += (d + d2) / 2.0 * nh;
      }
    }
    cout << ans << endl;
  }
}