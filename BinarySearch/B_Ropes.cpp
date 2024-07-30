/* OM VIGHNHARTAYE NAMO NAMAH :*/

#include <bits/stdc++.h>

using namespace std;

#define int long long
#define double long double

bool cancut(vector<int> &a, int k, double x) {
  int y = 0;
  for (int i : a) {
    y += i / x;
    if (y >= k) break;
  }
  return y >= k;
}

signed main() {
  ios ::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  for (int &x : a) cin >> x;
  double l = 0;
  double r = 1e7;
  for (int i = 0; i < 61; i++) {
    double mid = (l + r) / 2;
    if (cancut(a, k, mid))
      l = mid;
    else
      r = mid;
  }
  cout << fixed << setprecision(10) << l << endl;
}