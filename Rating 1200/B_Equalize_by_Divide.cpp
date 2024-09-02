/* OM VIGHNHARTAYE NAMO NAMAH :*/

#include <bits/stdc++.h>
using namespace std;

#define int long long

void jaiShreeRam() {
  int n;
  cin >> n;
  vector<int> a(n);
  bool flag = 0;
  bool c = 1;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (i != 0)
      if (a[i] != a[0]) c = 0;
    if (a[i] == 1) flag = 1;
  }
  if (c) {
    cout << 0 << endl;
    return;
  }
  if (flag) {
    cout << -1 << endl;
    return;
  }
  vector<pair<int, int>> ans;
  while (count(a.begin(), a.end(), a[0]) != n) {
    int i = max_element(a.begin(), a.end()) - a.begin();
    int j = min_element(a.begin(), a.end()) - a.begin();
    if (i == j) break;
    ans.emplace_back(i + 1, j + 1);
    a[i] = ceil((a[i] + a[j] - 1) / a[j]);
  }
  cout << ans.size() << endl;
  for (auto x : ans) cout << x.first << " " << x.second << endl;
}

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0), cout.tie(0);
  int t;
  cin >> t;
  while (t-- > 0) {
    jaiShreeRam();
  }
}