/* OM VIGHNHARTAYE NAMO NAMAH :*/

#include <bits/stdc++.h>
using namespace std;

#define int long long

void jaiShreeRam() {
  int n, k;
  cin >> n >> k;
  vector<int> s(n + 1);
  for (int i = n - k + 1; i <= n; i++) cin >> s[i];
  if (k == 1) {
    cout << "Yes" << endl;
    return;
  }
  vector<int> a(n + 1);
  for (int i = n - k + 2; i <= n; i++) {
    a[i] = s[i] - s[i - 1];
  }

  if (!is_sorted(a.begin() + n - k + 2, a.end())) {
    cout << "No" << endl;
    return;
  }
  if (s[n - k + 1] > a[n - k + 2] * (n - k + 1)) {
    cout << "No" << endl;
    return;
  }
  cout << "Yes" << endl;
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