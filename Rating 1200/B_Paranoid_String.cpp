#include <bits/stdc++.h>
using namespace std;

#define int long long

void jaiShreeRam() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  int ans = n;
  for (int i = 1; i < n; i++) {
    if (s[i] != s[i - 1]) ans += (i);
  }
  cout << ans << endl;
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