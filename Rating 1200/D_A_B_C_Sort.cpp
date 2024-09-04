/* OM VIGHNHARTAYE NAMO NAMAH :*/

#include <bits/stdc++.h>
using namespace std;

#define int long long

void jaiShreeRam() {
  int n;
  cin >> n;
  int a[n];
  for (int &x : a) cin >> x;
  for (int i = (n % 2); i < n; i += 2) {
    if (a[i] > a[i + 1]) swap(a[i], a[i + 1]);
  }
  int max = -1;
  bool flag = 1;
  for (int x : a) {
    if (x < max) {
      flag = 0;
      break;
    }
    max = x;
  }
  if (flag)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
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