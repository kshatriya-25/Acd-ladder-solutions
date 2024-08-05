/* OM VIGHNHARTAYE NAMO NAMAH :*/

#include <bits/stdc++.h>

using namespace std;

// #define int long long
#define double long double

bool isfeasible(vector<double> &x, vector<double> &v, double time) {
  double minx = -1e10;
  double maxx = 1e10;
  for (int i = 0; i < x.size(); i++) {
    minx = max(minx, x[i] - (time * v[i]));
    maxx = min(maxx, x[i] + (time * v[i]));
  }
  return minx <= maxx;
}

int main() {
  ios ::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int n;
  cin >> n;
  vector<double> x(n), v(n);
  for (int i = 0; i < n; i++) {
    cin >> x[i] >> v[i];
  }
  double l = 0.0;
  double r = 1e10;
  double eps = 1e-7;
  while (r - l > eps) {
    double mid = l + (r - l) / 2.0;
    if (isfeasible(x, v, mid))
      r = mid;
    else
      l = mid;
  }
  cout << fixed << setprecision(7) << r;
}