/* OM VIGHNHARTAYE NAMO NAMAH :*/

#include <bits/stdc++.h>
using namespace std;

#define int long long

void jaiShreeRam() {
  int n;
  cin >> n;
  int a[n];
  for (auto &x : a) cin >> x;
  for (int ct_liars = 0; ct_liars <= n; ct_liars++) {
    int actual = 0;
    for (auto l : a) {
      if (l > ct_liars) actual++;
    }
    if (actual == ct_liars) {
      cout << actual << endl;
      return;
    }
  }
  cout << -1 << endl;
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