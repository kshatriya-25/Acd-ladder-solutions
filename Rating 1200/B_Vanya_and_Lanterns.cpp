/* OM VIGHNHARTAYE NAMO NAMAH :*/

#include <bits/stdc++.h>

using namespace std;

#define all(v) v.begin(), v.end()
signed main() {
  ios ::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int n, l;
  cin >> n >> l;
  vector<int> lanterns(n);
  int m = -1;
  for (int &x : lanterns) {
    cin >> x;
  }
  sort(all(lanterns));
  m = 2 * (max(lanterns[0], l - lanterns[n - 1]));
  for (int i = 0; i < n - 1; i++) {
    m = max(m, (lanterns[i + 1] - lanterns[i]));
  }
  double distance = m / 2.0;
  cout << fixed << setprecision(10) << distance << endl;
}