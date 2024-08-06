/* OM VIGHNHARTAYE NAMO NAMAH :*/

#include <bits/stdc++.h>

using namespace std;

#define int long long
#define double long double

bool isfeasiblemax(vector<pair<int, int>> &pairs, int n, int k, double avg) {
  vector<double> c(n);
  for (int i = 0; i < n; i++) {
    c[i] = pairs[i].first - (avg * pairs[i].second);
  }
  sort(c.begin(), c.end(), greater<double>());
  double sum = 0;
  for (int i = 0; i < k; i++) {
    sum += c[i];
  }
  return sum >= 0;
}

signed main() {
  ios ::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int n, k;
  cin >> n >> k;
  vector<pair<int, int>> pairs(n);
  for (int i = 0; i < n; i++) {
    cin >> pairs[i].first >> pairs[i].second;
  }
  double l = 0, r = 1e5, mid;
  while (r - l > 1e-7) {
    mid = (l + r) / 2;
    if (isfeasiblemax(pairs, n, k, mid))
      l = mid;
    else
      r = mid;
  }

  cout << setprecision(10) << fixed << l;
}