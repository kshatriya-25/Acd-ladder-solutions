/* OM VIGHNHARTAYE NAMO NAMAH :*/

#include <bits/stdc++.h>

using namespace std;

#define int long long
#define double long double
bool value(double x, double c) {
  double k = (x * x) + sqrt(x);
  return k >= c;
}

signed main() {
  ios ::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  double c;
  cin >> c;
  double l = 0, r = 1e12;
  double eps = 1e-7;
  while (r - l > eps) {
    double mid = (l + r) / 2.0;
    if (value(mid, c))
      r = mid;
    else
      l = mid;
  }
  cout << fixed << setprecision(15) << l << endl;
}